#include<iostream>
#include<vector>
using namespace std;
//1. 先找到其中一个target
//2. 以第一个找到的target为中点,二分L和R
int main(){
    vector<int> nums = { 5,7,7,8,8,8,10,11,11};
    int target = 8;
    vector<int> ret = { -1,-1 };
    int L = 0, R = nums.size() - 1, mid = 0;
    while (L!=R) {
        mid = L + ((R - L) >> 1);
        if (nums[mid] >= target) R = mid;
        else L = mid+1;
    }
    if (nums[R] == target) {
        ret[0] = R;
        R = nums.size() - 1;
        while (L != R) {
            mid = L + ((R - L) >> 1);
            if (nums[mid] >= target+1) R = mid;
            else L = mid + 1;
        }
        if (nums[L] == target && L == nums.size() - 1) ret[1] = L;
        else ret[1] = L - 1;
    } 
    return 0;
}
