#include<stdio.h>
#include<stddef.h>
struct s1
{
	char a1; 
	int i;
	char c2;
};
struct s2
{
	char a1;
	char c2;
	//int i;
};
struct s3
{
	int i;
	char a1;

};
struct s4
{
	char a1;
	int i;
};
struct s5
{
	char a1;
	int i;
	double b1;
	int* p1;
	float f1;
};

int main() {
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));
	printf("%d\n", sizeof(struct s4));
	printf("%d\n", sizeof(struct s5));
	printf("\n");
	printf("%d\n", offsetof(struct s5,a1));
	printf("%d\n", offsetof(struct s5,i));
	printf("%d\n", offsetof(struct s5,b1));
	printf("%d\n", offsetof(struct s5,p1));
	printf("%d\n", offsetof(struct s5,f1));
	return 0;
}