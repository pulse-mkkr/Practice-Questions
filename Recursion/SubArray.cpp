#include<bits/stdc++.h>
using namespace std;
void subarr(vector<int> &v,vector<int> e,int idx){
    if(idx==v.size()){
        for(int ele :e){
            cout<<ele;
        }
        cout<<endl;
        return;
    }
    subarr(v,e,idx+1);
    if(e.empty()||e[e.size()-1]==v[idx-1]){
        e.push_back(v[idx]);
        subarr(v,e,idx+1);
    }
    
}
int main(){
    vector<int> v={1,2,3,4};
    vector<int> e;
    subarr(v,e,0);
}
