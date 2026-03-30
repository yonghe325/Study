#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	int mins = 0;
	int mid;
	while (num) {
		mid = num;
		while (num) {
			mid -= num % 10;
			num /= 10;
		}
		//cout << mid << endl;
		num = mid;
		mins++;
	}
	cout << mins << endl;
	return 0;
}