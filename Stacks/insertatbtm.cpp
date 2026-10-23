#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aaabbcddaabffg";
    stack<int>st;
    for(char ch: s){
        if(st.empty())st.push(ch);
        if(st.top()!=ch)st.push(ch);
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
