#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print (const vector<int> &z){
    for(int a : z){
        cout<<a<<" ";
    }
}
int invercnt(vector<int> &a,vector<int> &b){
    int c=0;
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            c+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return c;
}
void merge(vector<int> &ans,vector<int> &a,vector<int> &b){
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    while(i<a.size()) ans[k++]=a[i++];
    while(j<b.size()) ans[k++]=b[j++];
}
void mergeSort(vector<int> &v){
    int n=v.size();
    if(n<=1)return;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    cnt+=invercnt(a,b);
    merge(v,a,b);
}
int main(){
    vector<int> v={5,1,3,0,4,9,6};
    mergeSort(v);
    print(v);
    cout<<"\nTotal Inversions are : "<<cnt;
    return 0;
}
