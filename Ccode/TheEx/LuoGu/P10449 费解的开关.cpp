#include<iostream>
#include<string>
using namespace std;
int calc(int num) {
	int count = 0;
	while (num) {
		num &= num - 1;
		//取出num中最左边的1
		count++;
	}
	return count;
}
//计算一个二进制数里面有多少个1

int main() {
	int T; cin >> T;
	while (T--) {
		int a[5] = { 0 };
		int cd = 0;
		for (int i = 0; i < 5; i++)
		{
			cin >> cd;
			for (int j = 0; j < 5; j++)
			{
				a[i] += (((cd % 10) ^ 1) << j);//取反存储
				cd /= 10;
			}
		}
		//以取反二进制存放
		int ret = 0x3f3f3f;
		int tmp[5];
		//枚举第一行所有的按法
		for (int fs = 0; fs < (1 << 5) - 1; fs++)//第一行的按法 
		{
			memcpy(tmp, a, sizeof(a));
			//每一次更新第一行的解法时,从tmp里修改比较
			//防止破坏原始数据
			int push = fs;
			//第一行的按法
			int count = 0;
			for (int i = 0; i < 5;i++) //计算每一行的结果和按法;
			{
				count += calc(push);
				//计算每次按法里面有几个1
				//代表按了几次
				tmp[i] = tmp[i] ^ push ^ (push << 1) ^ (push >> 1);
				//更新状态 
				tmp[i] &= (1 << 5) - 1;
				//清空位数大于5的高位
				if (i == 5-1)
					break;
				//当i==4时 已经没有下一行,直接跳出
				tmp[i + 1] = tmp[i + 1] ^ push;
				//更新下一行
				push = tmp[i];
				//将本行状态作为下一行的按法
			}
			if (tmp[5 - 1] == 0) ret = count < ret ? count : ret;
		}
		if (ret > 6) cout << -1 << endl;
		else cout << ret << endl;
	}
	return 0;
}