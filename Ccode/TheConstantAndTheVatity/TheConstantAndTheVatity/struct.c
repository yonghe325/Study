#include <stdio.h>
struct STU//��������
{
	char name[20];
	int age;
	char sex[10];
	char tele[13];//char[]����,�������һ��Ԫ��Ĭ�Ϸ�\0��ֹ��
	//��Ա����
};
print(struct STU* ps)//����STU���͵�ָ��
{
	printf_s("%s %d %s %s\n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//ͨ�������ô�ӡSTU���ͱ���s�ĸ���Ա����
	printf_s("%s %d %s %s\n",ps->name, ps->age, ps->sex, ps->tele);
	//psָ��STU���ͱ���,->��ʾȡ��ps�����STU���ͱ����е�ĳһ��Ա����

}

int main()
{
	struct STU s = {"zhangsan",20,"nan","123456789000"};
	//����һ��STU����,������Ϊs,Ȼ���ʼ��
	printf_s("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	//�ֱ��ӡ
	print(&s);
	//ȡ������s�ĵ�ַ,����print������
	
	return 0;

}