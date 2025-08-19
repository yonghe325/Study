#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
struct stu
{
	char name[20];
	int age;
	double score;
};
void set_stu (struct stu* ps )
{
	//strcpy_s(*(ps).name, 20, "zhangsan");
	////初始值已为0,无法再用 = 直接赋值
	////用strcpy进行拷贝
	//*(ps).age = 20;
	//*(ps).score = 100.0;

	strcpy_s(ps->name,20, "zhangshan");
	ps->age = 20;
	ps->score = 100.0;
	// -> 指向结构体指针变量对应结构体的成员变量  
	// 规范
	// 结构体指针 -> 成员
	//
	// ss.age
	// 不规范
	// 结构体对象标识符.成员

}
void print_stu(struct stu ss)
{
	printf("name = %s\nage = %d\nscore = %fl\n", ss.name, ss.age, ss.score);
}


int main()
{
	struct stu s = { 0 };
	//将初始值赋值为0
	set_stu(&s);
	print_stu(s);

	return 0;
}





