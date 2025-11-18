#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main1() {
	int*p = (int*)malloc(40);
	if (p ==NULL)//避免空指针
	{
		return 1;
	}
	*p = 20;
	return 0;
}