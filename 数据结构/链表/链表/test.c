#include"Seqlist01.h"

int main() {
	SL s1;
	SLinit(&s1);
	SLPushback(&s1, 3);
	SLPushback(&s1, 1);
	SLPushback(&s1, 2);
	SLPushback(&s1, 4);
	SLPushback(&s1, 5);
	SLPushfront(&s1, 6);
	SLPushfront(&s1, 7);

	SLPrintf(&s1);

	SLPopfront(&s1);
	SLPopfront(&s1);
	
	SLPopback(&s1);
	SLPopback(&s1);
	
	SLPrintf(&s1);

	SLSort(&s1);
	
	SLPrintf(&s1);

	return 0;
}