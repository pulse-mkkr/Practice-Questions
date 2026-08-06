#include<bits/stdc++.h>
using namespace std;
void subset(string ans,string o){
    if(o==""){
        cout<<"{"<<ans<<"}\n";
        return;
    }
    for(int i=0;i<o.size();i++){
        string temp=o.substr(0,i)+o.substr(i+1);//removing the element which got passed and returning string
        subset(ans+o[i],temp);
        
    }
}
int main(){
    string str="abc";
    subset("",str);
}
