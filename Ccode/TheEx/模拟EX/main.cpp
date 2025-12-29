#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    while(cin>>n){
        int r= 0;
        cin>>r;
        vector<int> arr(n);
        reverse(arr.begin(),arr.end());
        //先整体逆序
        reverse(arr.begin(), arr.begin() +(n-r));
        //逆序前半部分
        reverse(arr.begin() +r, arr.end());
        //逆序后半部分
    }
    return 0;
}