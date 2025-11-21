#include"Linklist.h"
int main() {
	LK* plist = NULL;
	//此时plist->next = NULL

	LKPushBack(&plist,1);
	LKPushBack(&plist,2);
	LKPushBack(&plist,3);
	LKPushBack(&plist,4);
	//LKPushBack(&plist,3);
	//LKPushFront(&plist, 4);

	//LKPopBack(&plist);

	//LKPushBack(&plist, 5);
	//LKPopFront(&plist);
	//LKPopFront(&plist);
	//LKPopFront(&plist);

	//LKPushFront(&plist, 4); 

	LKPrintf(plist);

	//LKRever01(&plist);
	//plist =  LKRever02(&plist);
	//LKRever02(&plist);
	//LKRever03(&plist);
	LKRever04(&plist);


	LKPrintf(plist);
	return 0;
}