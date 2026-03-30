#include<stdio.h>

char* convert(char* s, int numRows) {
    int len = 0;
    while ((s + len) != 0) {
        len++;
    }
    printf("%d", len);
    char* arr = (char*)calloc(50, sizeof(char));
    if (len <= numRows) {
        return s;
    }
    for (int i = 0; i * (numRows - 2) < len; i++) {
        *(arr + i) = *(s + i * (numRows - 2));
    }

    return arr;
}
int main() {
    char s[] = "PAYPALISHIRING";
    convert(s, 3);
	return 0;
}