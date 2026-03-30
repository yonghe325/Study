#include <stdio.h>
struct STU//类型名称
{
	char name[20];
	int age;
	char sex[10];
	char tele[13];//char[]类型,留出最后一个元素默认放\0终止符
	//成员变量
};
print(struct STU* ps)//接收STU类型的指针
{
	printf_s("%s %d %s %s\n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//通过解引用打印STU类型变量s的各成员变量
	printf_s("%s %d %s %s\n",ps->name, ps->age, ps->sex, ps->tele);
	//ps指向STU类型变量,->表示取出ps代表的STU类型变量中的某一成员变量

}

int main()
{
	struct STU s = {"zhangsan",20,"nan","123456789000"};
	//创建一个STU类型,并命名为s,然后初始化
	printf_s("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	//分别打印
	print(&s);
	//取出变量s的地址,放入print函数中
	
	return 0;

}