#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void menu() {
	printf("************************************\n");
	printf("******   1.add    2.del    *********\n");
	printf("******   3.search 4.modify *********\n");
	printf("******   5.show   6.sort   *********\n");
	printf("******   0.exit            *********\n");
	printf("************************************\n");
}
//开始选择菜单

void sort_menu() {
	printf("**************************************\n");
	printf("******       1.按姓名排序       ******\n");
	printf("******       2.按年龄升序       ******\n");
	printf("******       3.按年龄降序       ******\n");
	printf("**************************************\n");
}
//排序选择菜单

void initContact(Contact* con) {
	assert(con);
	con->cur_count = 3;
	//当前最多能有3个联系人
	con->count = 0;
	//memset(con->data, 0, sizeof(con->data));
	//动态版本不在有memset
	con->data = (Peoinfo*)calloc(3, sizeof(Peoinfo));
	//开辟存放3个联系人的数组,同时初始化为0
	if (con->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
}
//00.初始化通讯录

void dropContact(Contact* con) {
	assert(con);
	free(con->data);
	//只有con->datas是通过calloc函数开辟的
	con->data = NULL;
}
//销毁通讯录函数


static void expansionContact(Contact* con) {
	assert(con);
	//Contact* ret = realloc(con->data, sizeof(con->data[0]) * expansion_num);
	//错误,只 sizeof(con->data[0]) q其实是缩小
	//每次扩容expansion_num人
	Peoinfo* ret = (Peoinfo*)realloc(con->data, (con->cur_count + expansion_num) * sizeof(Peoinfo));
	if (ret != NULL)
	{
		con->data = ret;
		con->cur_count += expansion_num ;
		memset(&(con->data[con->count]),0, sizeof(Peoinfo)*expansion_num);
		//将新扩容的空间赋值为0
		printf("已扩容\n");
	}
	else
	{
		printf("增容失败 expansionContact :  %s\n",strerror(errno));
	}
	//检测是否已完成扩容
}
//1.1动态扩容函数

void add(Contact* con) {
	assert(con);
	if (con->count == MAX)//通讯录已满
	{
		printf("通讯录已满,无法添加");
		return;
	}
	else if (
		con->count == con->cur_count // 判断是否已经需要扩容
		&& 
		con->cur_count + expansion_num <MAX//判断扩容后是否超出最大联系人
	)
	{
		expansionContact(con);
		//每次扩容expansion_num人
	}
	//添加时
	//将信息放到下标为count的位置
	//然后count+1
	printf("输入联系人姓名 : ");
	scanf("%s", con->data[con->count].name);
	//name为一个数组,数组名本身就是首元素的地址,因此不用取地址

	printf("输入联系人年龄 : ");
	scanf("%d", &(con->data[con->count].age));
	//age为一个int类型,本身为一个值,要取出地址

	printf("输入联系人性别 : ");
	scanf("%s", con->data[con->count].sex);

	printf("输入联系人电话 : ");
	scanf("%s", con->data[con->count].tele);

	printf("输入联系人地址 : ");
	scanf("%s", con->data[con->count].addr);

	(con->count)++;
	//printf("已增加,现有 %d 个联系人\n", (con->count));
	//printf("count = %d\ncur_count = %d\n", con->count, con->cur_count);

}
//1. 增加联系人

static int foundname(const Contact* con, char* fn) {
	for (int i = 0; i < con->count; i++)
	{
		if (!(strcmp(con->data[i].name, fn)))
		{
			return i;
		}
	}
	return -1;
}
//删改等都需要查找联系人
//因此封装一个函数
//返回查找到的下标
//由于该函数不需要主函数main中直接调用
//可将该函数直接 static 固定,限制其作用域为本文件
//可使其不被主函数直接看见,保障其安全性,隐私性

void del(Contact* con) {
	char name[MAX_NAME] = { 0 };
	assert(con);
	if (con->count == 0)
	{
		printf("没有联系人");
		return;
	}
	//判断是否有联系人
	//查找联系人
	printf("请输入需要删除的联系人姓名 : ");
	scanf("%s", name);
	int ret = foundname(con, name);
	if (ret >= 0)
	{
		//1.类似初始化代替删除联系人
		//memset(&(con->data[ret]), 0, sizeof(con->data[ret]));

		//2.将后面元素向前覆盖
		for (int i = ret; i < con->count-1; i++)
		{
			con->data[i] = con->data[i+1];
		}
		con->count--;//删去一个联系人,将计数count退回1
		printf("删除成功\n");
		return;
	}
	else
	{
		printf("删除失败,没有找到该联系人\n");
		return;
	}
}
//2.删除联系人

void search(const Contact* con) {
	char name[MAX_NAME];
	printf("请输入被查找联系人的姓名 : ");
	scanf("%s", name);
	int ret = foundname(con, name);
	if (ret>=0)
	{
		printf("被查找联系人为 : \n"); 
		printf("\t姓名\t\t年龄\t\t性别\t\t电话\t\t地址\n");
		printf("\t%s\t\t%d\t\t%s\t\t%s\t\t%s\n", con->data[ret].name, con->data[ret].age, con->data[ret].sex, con->data[ret].tele, con->data[ret].addr);
		return;
	}
	else
	{
		printf("没有查找到该联系人\n");;
		return;
	}
}
//3.查找联系人

void modify(Contact* con) {
	char name[MAX_NAME];
	printf("请输入被修改联系人的姓名 : ");
	scanf("%s", name);
	int ret = foundname(con, name);
	if (ret >= 0)
	{
		printf("请修改该联系人\n");
		printf("输入联系人姓名 : ");
		scanf("%s", con->data[ret].name);
		printf("输入联系人年龄 : ");
		scanf("%d", &(con->data[ret].age));
		printf("输入联系人性别 : ");
		scanf("%s", con->data[ret].sex);
		printf("输入联系人电话 : ");
		scanf("%s", con->data[ret].tele);
		printf("输入联系人地址 : ");
		scanf("%s", con->data[ret].addr);
		printf("修改完成\n");
		return;
	}
	else
	{
		printf("没有查找到该联系人\n");;
		return;
	}

}
//4.修改联系人

void showContact(const Contact* con) {
	//只打印,不修改
	assert(con);
	int i = 0;
	for (i = 0; i < con->count; i++)
	{
		printf("\t姓名\t\t年龄\t\t性别\t\t电话\t\t地址\n");
		printf("\t%s\t\t%d\t\t%s\t\t%s\t\t%s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].addr);
		//printf("第 %d 个\n",con->count);
		//printf("    姓名 : %s \n",con->data[i].name);
		//printf("    年龄 : %d \n", con->data[i].age);
		//printf("    性别 : %s \n", con->data[i].sex);
		//printf("    电话 : %s \n", con->data[i].tele);
		//printf("    地址 : %s \n", con->data[i].addr);
	}
	printf("\n");

	printf("打印完毕\n");
}
//5. 打印通讯录

static int cmp_Peoinfo_name(const void* e1, const void* e2) {
	return strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name);
}
//1. 按姓名排序
static int cmp_Peoinfo_age_ASC(const void* e1, const void* e2) {
	return (((Peoinfo*)e1)->age - ((Peoinfo*)e2)->age);
}
//2.年龄升序
static int cmp_Peoinfo_age_DESC(const void* e1, const void* e2) {
	return (((Peoinfo*)e2)->age - ((Peoinfo*)e1)->age);
}
//3.年龄降序

void sort(Contact* con) {
	int input_sort = 0;
	sort_menu();
	printf("选择方排序式 : \n");
	scanf("%d", &input_sort);
	switch (input_sort) {
	case 1:
		qsort(con->data, con->count, sizeof(con->data[0]), cmp_Peoinfo_name);
		break;
	case 2:
		qsort(con->data, con->count, sizeof(con->data[0]), cmp_Peoinfo_age_ASC);
		break;
	case 3:
		qsort(con->data, con->count, sizeof(con->data[0]), cmp_Peoinfo_age_DESC);
		break;
	default:
		printf("输入错误,请重新选择\n");
		break;
	}
	printf("排序完成\n");
}
//6.排序
//使用sqort函数排序


