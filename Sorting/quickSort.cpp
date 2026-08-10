#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print (const vector<int> &z){
    for(int a : z){
        cout<<a<<" ";
    }
    cout<<endl;
}
int pivot(int si,int ei,vector<int>&v){
    int c=0;
    int cri=(si+ei)/2;
    for(int i=si;i<=ei;i++){
        if(i==cri)continue;
        if(v[si]>v[i])c++;
    }
    int pvt=si+c;
    swap(v[si],v[pvt]);
    int i=si,j=ei;
    while(i<pvt&&j>pvt){
        if(v[pvt]>v[i])i++; 
        else if(v[pvt]<v[j]) j--;
        else /*if(v[pvt]>v[j]&&v[pvt]<=v[i])*/swap(v[i],v[j]);
    }
    return pvt;
}
void quickSort(vector<int>&v,int si,int ei){
    if(si>=ei)return;
    int pidx=pivot(si,ei,v);
    quickSort(v,si,pidx-1);
    quickSort(v,pidx+1,ei);
}
int main(){
    vector<int> v={5,4,3,7,8,1,2,5,6,0,9};
    print(v);
    quickSort(v,0,v.size()-1);
    print(v);
    return 0;
}
