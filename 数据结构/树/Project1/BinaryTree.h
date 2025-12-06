#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
//尝试构建完全有序二叉树

typedef struct BTNode
{
	int data;
	BTNode* left;
	BTNode* right;
}BTNode;

BTNode* BTNodeInit(BTNode* Node,int len) {
	static int x = 1;
	BTNode* Node_mid = (BTNode*)malloc(sizeof(BTNode));
	if (Node_mid)
	{
		Node = Node_mid;
		Node->data = x++;
		Node->left = BTNodeInit(Node->left,len);
		Node->right = BTNodeInit(Node->right,len);
	}
	else {

	}
}