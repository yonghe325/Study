# 快慢指针法
有两个指针
slow 和 fast
二者初始同时指向头节点
1. fast先走k-1步
2. slow 和 fast同时向前
	+ 当fast走到尾节点时
	+ ==此时slow指向倒数第k个节点==