```cpp
class Solution {
public:
    int beautifulBouquet(vector<int>& flowers, int cnt) {
        map<int ,int>arr;
        int left = 0;
        int ret = 0;
        for(int i =0;i<flowers.size();i++){
            arr[flowers[i]]++;
            while(arr[flowers[i]]>cnt){
                arr[flowers[left]]--;
                left++;
            }
            ret += i-left+1;
        }
        return ret;
    }
};
```