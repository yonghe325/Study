#include<stdio.h>
struct index
{
	int x; 
	int y;
};

struct index founf_num(int (*arr)[3], int x, int y, int f) {
	struct index p = { -1,-1 };
	for (int i = 0; i < y; i++)
	{
		if (*(*(arr + i) + y - 1) >= f)
		{
			for (int j = 0; j < x; j++)
			{
				if (*(*(arr+i)+j) == f)
				{
					p.x = j;
					p.y = i;
					return p;
				}
			}
		}
	}
	return p;
}

int main() {
	//初始化杨氏矩阵
	//int arr[15][15] = { 0 };
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//int k = 0;
	//for (int i = 0; i < 15; i++)
	//{
	//	//arr[i][0] = i;
	//	k = i;
	//	for (int j = 0; j < 15+i; j++)
	//	{
	//		arr[i][j] = k ;
	//		k++;
	//	}
	//}
	/*for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");

	}*/
	int found = 20;
	
	struct index ret = founf_num(arr, 3, 3, found);
	printf("%d %d", ret.x, ret.y);

	int (*pf[10])(int*);
	int (*(*pf)(int*))[10];
	int(*(*pf)[10])(int*);
	return 0;
}