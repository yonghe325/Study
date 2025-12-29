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
	int n = 0;
	cin >> n;
	int num = 1;
	int x = 0;
	int y = 0;
	int mode = 0;
	while (num<=n*n) {
		if (y + dy[mode] < n && x + dx[mode] < n && 
			y + dy[mode] >=0 && x + dx[mode] >= 0 && // 防止边界
			((arr[y + dy[mode]][x + dx[mode]] == 0) || num == n * n)) // 防止重复
		{
				arr[y][x] = num++;
				y += dy[mode];
				x += dx[mode];

		}
		else
		{
			mode = (mode + 1) % 4;
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