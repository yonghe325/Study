#include "contact.h"




int main() {
	int input = 0;

//Peoinfo data[100];
//int count;
	Contact con;
//通讯录功能通过一个结构体实现

	initContact(&con);
//为实现初始化模块化功能
//通过一个函数实现
	do
	{
		menu();
		printf("请选择 : ");
		scanf_s("%d", &input);
		switch (input) {
		case ADD://1
			add(&con);
		//增加一个人的信息
			break;
		case DEL://2
			del(&con);
		//删除一个人的信息
			break;
		case SEARCH:
			search(&con);
		//查找一个人的信息
			break;
		case MODIFY:
			modify(&con);
		//修改一个人的信息
			break;
		case SHOW:
			showContact(&con);
			break;
		case SORT:
			sort(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			dropContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}