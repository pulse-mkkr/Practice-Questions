#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=64;
    int low=0,high=x;
    while(low<=high){
        int mid =low+(high-low)/2;
        if((mid*mid)==x){
            cout<<"Sqrt of "<<x<<" is "<<mid;
            return 0;
        }
        else if((mid*mid)>x)high=mid-1;
        else low=mid+1;
    }
    cout<<"Round of Sqrt of "<<x<<" is "<<high;//LOWER BOUND 
    return 0;
}
