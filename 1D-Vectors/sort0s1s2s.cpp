// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
void print(const vector<int> &x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return;
}
int main (){
    vector<int> v={2, 1, 2, 0, 1, 0, 2, 1, 0};//THREE POINTERS
    int i=0,j=0,k=v.size()-1;
    print(v);
    while(j<=k){
        if(v[j]==2){
            swap(v[j],v[k]);
            k--;
        }
        else if(v[j]==0){
            swap(v[j],v[i]);
            j++;
            i++;
        }
        else j++;
    }
    
//    // int i=0;
//     int j=v.size();
//     int no0=0,no1=0,no2=0;
//     for(int i=0;i<j;i++){
//         if(v[i]==0)no0++;
//         else if(v[i]==1)no1++;
//         else no2++;
//     }
//     int k=0;
//     while(no0!=0){
//         v[k]=0;
//         no0--;
//         k++;
//     }
//     while(no1!=0){
//         v[k]=1;
//         no1--;
//         k++;
//     }
//     while(no2!=0){
//         v[k]=2;
//         no2--;
//         k++;
//     }

//     // while(i<j){
//     //     if(v[i]==0) i++;
//     //     else if(v[j]==2) j--;
//     //     //else if(v[j]>1) swap(v[i],v[j--]);
//     //     else if(v[i]!=1||v[j]!=1) swap(v[i],v[j]);
//     //     else if(v[i]==1&&v[j]==1)j--;
//     //     else swap(v[i],v[i+1]);
//     // }
    print(v);
    return 0;
}
