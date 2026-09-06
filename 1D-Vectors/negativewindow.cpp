#include<bits/stdc++.h>
using namespace std;
void print(const vector<int>&v){
    for(int e:v){
        cout<<e<<" ";
    }
}
int main(){
    vector<int> arr={2,-3,4,4,-7,-1,4,-2,6};
    int k=3;
    int n=arr.size();
    vector<int>ans(n-k+1);
    int nn=0;
    int cn=0;
    int ci=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            cn=arr[i];
            ci=i;
            break;
        }
    }
    ans[0]=cn;
    int i=1;
    int j=k;
    while(j<n){
        if(ci>=i)ans[i]=cn;
        else{
            ci=-1;
            for(int x=i;x<i+k;x++){
                if(arr[x]<0){
                    cn=arr[x];
                    ci=x;
                    break;
                }
            }
            if(ci==-1)ans[i]=nn;
            else ans[i]=cn;
        }
        i++;
        j++;
    }
    print(ans);
    
    cout<<abs(-55);
    return 0;
}
