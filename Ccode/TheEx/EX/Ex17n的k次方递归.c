#include<stdio.h>


int pow_n_K(int n ,int k)
{
	if (k == 1) { return n;}
	return n * pow_n_K(n, k - 1);
}






int main()
{
	int n = 0;
	printf("����n:>");
	scanf_s("%d",&n);
	
	int k = 0;
	printf("����k:>");
	scanf_s("%d",&k);
	
	printf("%d\n", pow_n_K(n, k));

	return 0;
}