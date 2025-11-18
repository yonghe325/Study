#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strcat(char* dest, const char* sou) {
	assert(dest && sou);
	char* dest0 = dest;
	//找到dest的末尾
	while (*dest!='\0') {
		dest++;
	}

	while (*dest++ = *sou++) {
		;
	}

	return dest0 ;
}

int main() {
	char arr1[20] = "hellow ";
	char* arr2 = my_strcat(arr1,"world");
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}