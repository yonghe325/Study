#include<iostream>
using namespace std;
//思路1 : 创建矩阵,初始化为0
//	每铺设一个地毯,将覆盖面积填充为对应标号
//	最后查找
//static int map[10000][10000] = { 0 };
//void EX0101() {
//	int n = 0;
//	cin >> n;//组数
//	for (int t = 1; t <= n; t++)
//	{
//		int a, b, g, k;
//		cin >> a >> b >> g >> k;
//		//ab为左下坐标
//		//gk分别为xy轴方向长度
//		for (size_t i = a; i <= g; i++)
//		{
//			for (size_t j = b; j <= k; j++)
//			{
//				map[i][j] = t;
//			}
//		}
//		//填充
//	}
//	int x, y;
//	cin >> x >> y;
//	cout << (map[x][y] ? map[x][y] : -1) << endl;
//}



//思路2 : 创建坐标数组,存储每个点的信息
//	从后向前枚举
int a[1000], b[1000], g[1000], k[1000];
int EX0102() {
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];
	int x, y;
	cin >> x >> y;
	for (int i = n; i >= 0; i--)
	{
		if (x>=a[i]&& x<=a[i]+g[i] &&y>=b[i] && y<=b[i]+k[i])
		{
			cout << n;
			return 0;
		}
	}
	cout << -1;
	return -1;
}
