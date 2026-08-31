#include<bits/stdc++.h>
using namespace std;
void print(const vector<vector<int>> &ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
void sum(vector<vector<int>> &ans,vector<int> temp,vector<int> &ori,int target,int idx){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(target<0)return;
    for(int i=idx;i<ori.size();i++){
        temp.push_back(ori[i]);
        sum(ans,temp,ori,target-ori[i],i);
        temp.pop_back();
    }
}
vector<vector<int>> combi(vector<int> &combi,int target){
    vector<vector<int>> ans;
    vector<int> v;
    sum(ans,v,combi,target,0);
    return ans;
}

int main(){
    vector<int> candi={2,3,6,7};
    int target =7;
    vector<vector<int>> ans=combi(candi,target);
    print(ans);
    return 0;
}
