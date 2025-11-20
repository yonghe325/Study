#include"Linklist.h"
int main() {
	LK* plist = NULL;
	//此时plist->next = NULL

	LKPushBack(plist,2);
	LKPushBack(plist,2);
	LKPushBack(plist,2);
	LKPushBack(plist,2);

	LKPrintf(plist);
	return 0;
}