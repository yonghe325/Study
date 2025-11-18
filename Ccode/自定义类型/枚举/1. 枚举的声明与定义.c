#include<stdio.h>
enum Day {
	Mon=2,
	Tues,
	Wed = 5,
	Thur,
	Fri,
	Sat,
	Sun
};


int main() {
	enum Day d = Fri;
	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);
	return 0;
}