#include"head.h"
//冷热数据队列

int fn03() {
	int n1, n2, m;
	cin >> n1 >> n2 >> m;
	list<int> q1;
	list<int> q2;
	unordered_map<int, list<int>::iterator> q1m;
	unordered_map<int, list<int>::iterator> q2m;

	int x;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		if (!q1m.count(x) && !q2m.count(x))
		{
			if (!n2)
			{
				q2m.erase(*q2.rbegin());
				q2.pop_back();
				n2++;
			}//长度不够
			q2.push_front(x);
			q2m[x] = q2.begin();
			//在q2头插
			n2--;
		}
		else if (q2m.count(x))
		{
			if (!n1)
			{
				if (n2) {
					q2.push_back(*q1.rbegin());
					q2m[*q1.rbegin()] = --q2.end();
					n2--;
					n1++;
				}
				else {
					q1m.erase(*q1.rbegin());
					q1.pop_back();
					n1++;
				}
			}
			q1.push_front(x);
			q2.erase(q2m[x]);
			q2m.erase(x);
			q1m[x] = q1.begin();
			n2++;
			n1--;
		}
		else{
			//在q1里找到
			q1.erase(q1m[x]);
			q1.push_front(x);
			q1m[x] = q1.begin();
		}
	}
	return 0;
}