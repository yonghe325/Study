#include<stdio.h>
int main() {
	int  killer = 0;;
	for (killer  = 'a'; killer< 'd'; killer++)
	{
		//判断
		if ((
			(killer != 'a') + 
			(killer == 'c') + 
			(killer == 'd') + 
			(killer != 'd')) == 3)
		{
			printf("%c", killer);
		}
	}
	return 0;
}