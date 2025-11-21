#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int tmp = 0;

	l1->val = (l1->val) + (l2->val) + tmp;
}

int main() {

	return 0;
}