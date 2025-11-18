#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

//类型在头文件中声明
//常用的值使用宏定义
#define MAX 100
//通讯录最大值,name
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define expansion_num 2
//每次扩容的人数
typedef struct Peoinfo
{
	//char name[20];
	//int age;
	//char sex[20];
	//char tele[20];
	//char addr[30];

//使用宏定义替换不变的量
//更安全
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;
//声明一个人的通讯录类型
//重命名为Peoinfo

typedef struct Contact
{
	Peoinfo* data;
	//动态版本,其data的容量由calloc开辟,所以只存放一个指针
	//动态扩容通讯录
	//默认存放3个联系人
	//当需要扩容时
	//每次扩容两个联系人
	int cur_count;
	//设置当前最多能有几个联系人
	int count;
	//当前通讯录人的个数
}Contact;
//定义一个通讯录
//用来整合所有peo

//使用枚举代替选择
enum chooes_menu
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};
//增加代码的可读性及维护性


//声明函数 : 

void menu();
//初始选择菜单
void sort_menu();
//排序选择菜单
void initContact(Contact* con);
//初始化函数
void dropContact(Contact* con);
//销毁通讯录函数
void add(Contact* con);
//1.添加联系人
void del(Contact* con);
//2.删除联系人
void search(Contact* con);
//3.查找联系人
void modify(Contact* con);
//4.修改联系人
void showContact(const Contact* con);
//5.打印联系人
void sort(Contact* con);
//6. 排序

