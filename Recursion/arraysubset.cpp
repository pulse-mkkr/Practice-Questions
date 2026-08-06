#include<bits/stdc++.h>
using namespace std;
void subset(vector<vector<int>> ans,int idx,vector<int> &v,vector<int> &ori){
    if(idx==0){
        ans.push_back(v);
        return;
    }
    int e=ori[idx];
    subset(ans,idx++,v.push_back(e),ori);
    subset(ans,idx++,v,ori);
}

int main(){
    vector<int> o={1,2,3};
    vector<int> e;
    int i=0;
    vector<vector<int>> ans;
    subset(ans,i,e,o);
}
