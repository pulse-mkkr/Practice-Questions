#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int> &x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v={1,0,1,0,1,0,1,0,1,0,1,0};
    int n=v.size();
    int idx=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) v[idx++]=0;
    }
    while(idx<n){
        v[idx++]=1;
    }
    print(v);
    //method 1
    // print(v);
    // vector<int> ans;
    // int idx=0;
    // for(int i=0;i<n;i++){
    //     if(v[i]==0){
    //         ans.push_back(0);
    //         idx++;
    //     }
    // } 
    // while(idx<n){
    //     ans.push_back(1);
    //     idx++;
    // }
    // print(ans);
    return 0;
}
