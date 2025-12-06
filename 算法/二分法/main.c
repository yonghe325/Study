#include "head.h"
int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,14,17,18,19,20 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = fn(arr,len);
	printf("%d\n", ret);
	return 0;

}