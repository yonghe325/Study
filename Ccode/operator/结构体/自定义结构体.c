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
	////��ʼֵ��Ϊ0,�޷����� = ֱ�Ӹ�ֵ
	////��strcpy���п���
	//*(ps).age = 20;
	//*(ps).score = 100.0;

	strcpy_s(ps->name,20, "zhangshan");
	ps->age = 20;
	ps->score = 100.0;
	// -> ָ��ṹ��ָ�������Ӧ�ṹ��ĳ�Ա����  
	// �淶
	// �ṹ��ָ�� -> ��Ա
	//
	// ss.age
	// ���淶
	// �ṹ������ʶ��.��Ա

}
void print_stu(struct stu ss)
{
	printf("name = %s\nage = %d\nscore = %fl\n", ss.name, ss.age, ss.score);
}


int main()
{
	struct stu s = { 0 };
	//����ʼֵ��ֵΪ0
	set_stu(&s);
	print_stu(s);

	return 0;
}





