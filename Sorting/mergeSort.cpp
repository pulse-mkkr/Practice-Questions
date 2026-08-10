#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print (const vector<int> &z){
    for(int a : z){
        cout<<a<<" ";
    }
}
void merge(vector<int> &ans,vector<int> &a,vector<int> &b){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j])ans[k++]=a[i++];
        else ans[k++]=b[j++];
        cnt++;
    }
    while(j<b.size()){
        ans[k++]=b[j++];
        cnt++;
    }
    while(i<a.size()){
        ans[k++]=a[i++];
        cnt++;
    }
    return;
}
void mergeSort(vector<int> &ans){
    int n=ans.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=ans[i];
        cnt++;
    }
    for(int i=0;i<n2;i++){
        b[i]=ans[i+n1];
        cnt++;
    }
    mergeSort(a);
    mergeSort(b);
    merge(ans,a,b);
}
int main(){
    vector<int> v={2,78,2,15,48,3,15,48,-22,5,7,-7,58,0,-55,-77,20,34,0,78};
    cout<<"before : "<<cnt<<endl;
    mergeSort(v);
    print(v);
    cout<<"\nafter : "<<cnt;
    return 0;
}
