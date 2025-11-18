#include<stdio.h>
char* longestPalindrome(char* s) {
	char* start = s;
	char* end = start+1;
	int len = 0;
	while (*end++ != *start);
	end--;
	//start++;
	while (*end-- == *start++ && end+1 > start-1) {
		//end--;
		//start++;
		len++;
	}
	//len *= 2;

}
int main(){
	//char s[] = "babad";
	//char s[] = "cbbd";
	char s[] = "bacddcab ad";

	longestPalindrome(s);
	return 0;
}