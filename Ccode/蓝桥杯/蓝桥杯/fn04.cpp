#include"head.h"
//倒水
vector<int> arr;
int n, k;



int fmin(int mid,int i) {
	int sum = 0;
	int minc = mid;
	for (int m = i; m < n; m+=k)
	{
		if (arr[m]>=mid)
		{
			sum += arr[m] - mid;
			//如果arr[m]>=mid
			//则说明arr[m]可以为后面瓶子贡献(arr[m] - mid)个单位
		}
		else {
			//如果arr[m]<mid
			//则arr[m]要消耗前面瓶子贡献的单位
			if (sum >= (mid - arr[m]))
			{
				//如果前面瓶子贡献的单位足够让当前瓶子==mid
				//则直接消耗(mid - arr[m])个单位
				sum -= (mid - arr[m]);
			}
			else {
				//如果前面瓶子贡献的单位不能让让当前瓶子 == mid
				//则让minc与arr[m]+sum比较
				//并将sum全部消耗
				minc = min(minc, arr[m]+sum);

				//优化
				if (minc<mid) {
					return minc;
					//如果minc小于mid, 直接返回minc, 不用再计算
				}
				sum = 0;
			}
		}
	}
	//此时minc一定为以mid为基准的最小值
	return minc;
}
int fn04() {
	cin >> n >> k;
	int mid = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> mid;
		arr.push_back(mid);
	}
	//存放瓶子
	int max_min = 100001;
	for (int i = 0; i < k; i++)
	{
		int L = 1,R = 100000;
		int ans = 0;
		while (L<=R) {
			mid = L + (R - L) / 2;
			//最小值是mid吗?
			int fmin_ret = fmin(mid, i);
			if ( fmin_ret >= mid)//是mid, 将mid变大
			{
				ans = mid;
				L = mid+1;
			}
			else{//最小值不是, 将mid缩小
				R = mid-1;
			}
		}
		//此时mid就是当前颜色的最小值
		max_min = min(max_min, ans);
		//比较最小值中的最大值
		cout << max_min << "  " << endl;
	}
	return max_min;
}