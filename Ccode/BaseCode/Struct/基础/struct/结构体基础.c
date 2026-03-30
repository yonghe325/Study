#include<stdio.h>
struct Peo
	//声明结构体
{
	char name[10];
	char tel[12];
	char sex[5];
	int high;
};
struct Stu
{
	struct Peo p1;
	int num;
	float f;
};

void Printf2(struct Stu* s)
{
	printf("%s,%s,%s,%d,%d,%f\n",s->p1.name, s->p1.tel, s->p1.sex, s->p1.high,s->num, s->f);
}
void Printf1(struct Stu p)
{
	printf("%s,%s,%s,%d,%d,%f\n", p.p1.name, p.p1.tel, p.p1.sex, p.p1.high, p.num, p.f);


}



int main()
{
	struct Peo p1 = { "张三","12345678901" ,"男",181};
	//创建Peo变量p1,并初始化
	struct Stu p2 = { { "张三","12345678901" ,"男",181} , 123 , 100.0f };
	Printf2(&p2);
	Printf1(p2);

	//printf("%s,%s,%s,%d\n", p1.name, p1.tel, p1.sex, p1.high);
	//printf("%s,%s,%s,%d,%d,%f\n", p2.p1.name, p2.p1.tel, p2.p1.sex, p2.p1.high, p2.num, p2.f);
	return 0;
}