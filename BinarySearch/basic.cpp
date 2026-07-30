#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {1,2,7,4,3,22,4555,5,56,987,66};
    int target =22;
    sort(nums.begin(),nums.end());
    int low=0,high=nums.size()-1;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(nums[mid]==target){
            cout<<"Found at "<<mid;
            return 0;
        }
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
    }
    cout<<"Target Not Found";
    return 0;
}
