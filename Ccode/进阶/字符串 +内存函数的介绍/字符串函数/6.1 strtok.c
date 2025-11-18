#define _CRT_SECURE_NO_WARNINGS
//忽略安全警告
#include<stdio.h>
#include<string.h>
#include<assert.h>

int main() {


	const char* sep = { "@.#" };
	char email[] = "@@##..youxiang###0325@qq.com";
	char emial_cpy[40];
	strcpy(emial_cpy, email);

	/*char* ret =  strtok(emial_cpy, sep);
	while (ret != NULL) {
		printf("%s\n", ret);
		ret = strtok(NULL, sep);
	}
	printf("%s\n", ret);

	ret = strtok(emial_cpy, sep);
	printf("%s\n", ret);*/
	for (char* ret = strtok(emial_cpy, sep); ret != NULL ; ret = strtok(NULL,sep))
	{
		printf("%s\n", ret);
	}

	return 0;
}