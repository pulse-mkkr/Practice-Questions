#include<bits/stdc++.h>
using namespace std;
void print(const vector<int> &x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector <int> v={0,1,0,2,1,0,1,3,2,1,2,1};//nextgrtst,prevgrtst,min(ngrt,pgrt),
    vector <int> arr(v.size());              //compare with org and trapwater+=
    int n=arr.size();
    arr[n-1]=-1;
    int max=v[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i]=max;
        if(v[i]>max)max=v[i];
    }
    arr[0]=-1;
    max=v[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) arr[i]=max;
        if(v[i]>max)max=v[i];
    }
    int twater=0;
    for(int i=1;i<n-1;i++){
        if(v[i]<arr[i]) twater+=arr[i]-v[i];
    }
    print(v);
    print(arr);
    cout<<twater;
}
