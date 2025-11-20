#include"Seqlist01.h"
void SLinit(SL* ps) {
	ps->a = NULL;
	ps->size = ps->max = 0;
}
//初始化
static void SLExpansion(SL* ps) {
	if (ps->size ==ps->max)//相等时可扩容
	{
		int mid_max = ps->max == 0 ? 4 : (ps->max + exp);
		int* mid = (int*)realloc(ps->a, sizeof(int) * mid_max);
		if (mid == NULL)
		{
			perror(errno);
			exit(-1);
		}
		ps->a = mid;
		ps->max += exp;
	}
	//扩容
}

void SLPushback(SL*ps,int x) {
	SLExpansion(ps);
	ps->a[ps->size++] = x;
}
//尾插
void SLPushfront(SL* ps,int x) {
	SLExpansion(ps);
	for (int i = ps->size-1; i >= 0 ; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	//整体后移
	ps->a[0] = x;
	//放入最前面 
	ps->size++;
}
//头插
void SLPopback(SL* ps) {
	ps->a[ps->size-1] = 0;
	ps->size--;
}
//尾删
void SLPopfront(SL* ps) {
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
//头删

int Sort(void* e1, void* e2) {
	return *((int*)(e1)) - *((int*)(e2));
}

void SLSort(SL* ps) {
	qsort(ps->a, ps->size, sizeof(int), Sort);
}


void SLPrintf(SL* ps) {
	printf("a[] : ");
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//打印