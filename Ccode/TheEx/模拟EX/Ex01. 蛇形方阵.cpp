#include<iostream>
#include<vector>
using namespace std;
//给出不大于9的整数n
//输出n*n的蛇形方阵
int main() {
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	//相同下标,代表一种模式
	//越界则切换模式
	int arr[9][9] = { 0 };
	//初始化地图
	int n = 0;
	cin >> n;
	//n规定了的方阵大小
	//arr[][]限制了方阵的最大的大小
	int num = 1;
	int x = 0;
	int y = 0;
	int mode = 0;
	//当前模式
	while (num<=n*n) {
		if (y + dy[mode] < n && x + dx[mode] < n && 
			y + dy[mode] >=0 && x + dx[mode] >= 0 && // 先计算该运算的格子,防止边界
			((arr[y + dy[mode]][x + dx[mode]] == 0) || num == n * n)) // 防止重复
		{
				arr[y][x] = num++;
				y += dy[mode];
				x += dx[mode];
				//填充格子
		}
		else
		{
			mode = (mode + 1) % 4;
			// 切换模式
			// 切换模式的时候不用填充, 交给下一次填充
			// 这里只用切换模式
			
			//已废弃:
			//y += dy[mode];
			//x += dx[mode];
			//arr[y][x] = num++;

		}
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}printf("\n");

	}
	return 0;
}
//打印