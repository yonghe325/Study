#include<stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int num3[10] = { 0 };
    int n1 = nums1Size;
    int n2 = nums2Size;
    for (int i = 0; i < nums1Size + nums2Size; i++) {
        if (n1 > 0 && n2 > 0) {
            if (*(nums1 + nums1Size - n1) < *(nums2 + nums2Size - n2)) {
                num3[i] = *(nums1 + i);
                n1--;
            }
            else if (*(nums1 + nums1Size - n1) > *(nums2 + nums2Size - n2)) {
                num3[i] = *(nums2 + i);
                n2--;
            }
        }
        else if (n1 == 0) {
            num3[i] = *(nums2 + nums2Size - n2);
            n2--;
        }
        else if (n2 == 0) {
            num3[i] = *(nums1 + nums1Size - n1);
            n1--;
        }

    }
    //合并数组
    int len = nums1Size + nums2Size;
    if (len % 2) {
        return num3[len / 2];
    }
    else {
        return ((num3[len / 2] + num3[len / 2 - 1]) * 1.0) / 2;
    }
}
int main() {
    int nums1[2] = { 1,2 };
    int nums2[2] = { 3,4 };


    int ret = findMedianSortedArrays(nums1,2,nums2,2);
    return 0;
}