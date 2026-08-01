#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums,int target){
    int n=nums.size();
    if(n==1){
        if(nums[0]==target)return 0;
        else return -1;
    }//6 7 1 2 3 4 5
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target)return mid;
        if(nums[lo] <= nums[mid]){      // left sorted
            if(nums[lo] <= target && target < nums[mid]) hi = mid - 1;
            else lo = mid + 1;
            }
        else{                           // right sorted
            if(nums[mid] < target && target <= nums[hi]) lo = mid + 1;
            else hi = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int>nums={6,7,1,2,3,4,5};
    int target=4;
    cout<<search(nums,target)<<endl;
    return 0;
}
