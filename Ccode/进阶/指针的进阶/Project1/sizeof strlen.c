#include<stdio.h>
#include<string.h>
int main() {
	//int a[] = { 1,2,3,4 };
	/*printf("1 %d\n", sizeof(a));
	/*printf("2 %d\n", sizeof(a + 0));
	printf("3 %d\n", sizeof(*a));
	printf("4 %d\n", sizeof(a+1));
	printf("5 %d\n", sizeof(a[1]));
	printf("6 %d\n", sizeof(&a));
	printf("7 %d\n", sizeof(*&a));
	printf("71 %d\n", sizeof(&*a));
	printf("8 %d\n", sizeof(&a+1));
	printf("9 %d\n", sizeof(&a[0]));
	printf("10 %d\n", sizeof(&a[0]+1));*/

	//char arr[] = { 'a','b','c','d','e','f' };
	////printf("%d\n", sizeof(arr));
	////printf("%d\n", sizeof(arr+0));
	////printf("%d\n", sizeof(*arr));
	////printf("%d\n", sizeof(arr[1]));
	////printf("%d\n", sizeof(&arr));
	////printf("%d\n", sizeof(&arr+1));
	////printf("%d\n", sizeof(&arr[0]+1));

	//printf("1 %d\n", strlen(arr));
	//printf("2 %d\n", strlen(arr + 0));
	//printf("3 %d\n", strlen(*arr));
	//printf("4 %d\n", strlen(arr[1]));
	//printf("5 %d\n", strlen(&arr));
	//printf("6 %d\n", strlen(&arr + 1));
	//printf("7 %d\n", strlen(&arr[0]+1));

	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0]+1));*/


	/*char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p+1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));*/

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));





	return 0;
}