#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//比较整形元素
//e1,e2两个指针分别指向两个整数
int cmp_int(const void* e1, const void* e2){
	//if分别比较
	/*if (*(int*)e1 > *(int*)e2)
	{
		return 1;
	}
	else if (*(int*)e1 < *(int*)e2) {
		return -1;
	}
	else
	{
		return 0;
	}*/

	//快速返回
	//升序返回
	return ( *(int*)e1 - *(int*)e2 );
	//e1 > e2 则 (e1 - e2) > 0
	//e1 = e2 则 (e1 - e2) = 0
	//e1 < e2 则 (e1 - e2) < 0
	//降序返回
	//return (*(int*)e2 - *(int*)e1);
}


void test1() {

	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 11,51,21,34,87,25,61,54,155,94,31,999,115,136 };
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort快速排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_name(const void* e1, const void* e2) {
	//将 const void* e1 强制转换为 struct Stu* 类型
	// 
	//使用strcmp函数比较两个字符串 的 "大小"
	//而strcmph函数的 返回值 恰好是 >0,=0,<0;
	return strcmp( ((struct Stu*)e1)->name , ((struct Stu*)e2)->name );
	
}
int cmp_stu_age(const void* e1, const void* e2) {
	//将 const void* e1 强制转换为 struct Stu* 类型
	// 
	return ( ((struct Stu*)e1)->age - ((struct Stu*)e2)->age );

}
void test2() {
	//测试使用结构体数据
	struct Stu s[] = { {"c张三",15},{"b李四",16},{"a王五",17}};
	//printf("%u %u %u", sizeof(s[0]), sizeof(s[0]), sizeof(s[0]));
	int sz = sizeof(s) / sizeof(s[0]);
	//按name大小升序排列
	printf("\n按name大小升序排列\n");
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	for (int i = 0; i < sz; i++)
	{
		printf("第%d个数据 :\n  \tname : %s\n \tage =  %d\n",i + 1,s[i].name,s[i].age);
	}
	//按age大小升序排列
	printf("\n按age大小升序排列\n");
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
	for (size_t i = 0; i < sz; i++)
	{
		printf("第%d个数据 :\n  \tname : %s\n \tage =  %d\n", i + 1, s[i].name, s[i].age);

	}

	
}


int main() {

	//test1();
	//排序整形数据

	test2();
	//排序结构体数据
	return 0;
}