#include<bits/stdc++.h>
using namespace std;
void gen(string ans,int o,int c,int n){
    if(c==n){
        cout<<ans<<endl;
        return;
    }
    if(o<n)gen(ans+"(",o+1,c,n);//right ( should always be greater than ) 
    if(o>c)gen(ans+")",o,c+1,n);//only then left runs
}
int main(){
    int x=3;
    gen("",0,0,x);
    return 0;
}
