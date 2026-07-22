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
    vector<int> u={1,2,4,5,6,0};
    vector<int> v={3};
    int i =u.size()-v.size()-1;
    int j=u.size()-1;
    int k=v.size()-1;
    while(k>=0){
        if(v[k]>u[i]) u[j--]=v[k--];
        else if(v[k]<u[i]){
            u[j--]=u[i--];
        }
        else u[j--]=v[k--];
    }
    
    print(u);
    return 0;
}
