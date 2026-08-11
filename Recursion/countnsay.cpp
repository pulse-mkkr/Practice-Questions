#include<bits/stdc++.h>
using namespace std;
// string ans(string add,vector<vector<int>> &v){
//     int r=v.size();
//     int c=v[0].size();
//     for(int i=r-1;i>=0;i--){
//         for(int j=c-1;j>=0;j--){
//             add = to_string(v[i][j])+add;
//         }
//     }
//     return add;
// }
string helper(string con){
    // vector<vector<int>>v;
    string a="";
    for(int i=0;i<con.size();){
        // vector<int>z;
        
        int freq=0;
        int j=i;
        while(j<con.size()&&con[i]==con[j]){
            freq++;
            j++;
        }
        // z.push_back(freq);
        // z.push_back(con[i]-'0');
        // v.push_back(z);
        a+=to_string(freq);
        a+=con[i];
        i=j;
    }
    
    // a=ans(a,v);
    return a;
    
}
string cns(int n){
    if(n==1)return "1";
    string fans=cns(n-1);
    string e=helper(fans);
    return e;
}
int main(){
    int x=6;
    string ans="";
    ans=cns(x);
    cout<<ans;
    return 0;
}
