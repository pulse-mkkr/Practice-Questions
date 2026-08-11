#include<bits/stdc++.h>
using namespace std;
// int cnt=0;
void print(string e,string w,int k,string &fans,int &cnt){
    //if(!fans.empty())return;
    if(w==""){
        cnt++;
        if(cnt==k){
            fans=e;
            return ;
        }
        else return ;
    }
    
    for(int i=0;i<w.size();i++){
        string temp=w.substr(0,i)+w.substr(i+1);
        print(e+w[i],temp,k,fans,cnt);
    }
}

string gP(int n,int k){
    string abst="123456789";
    string cl=abst.substr(0,n);
    string v="";
    int cc=0;
    print("",cl,k,v,cc);
    return v;
}
int main(){
    int x=3;
    int k=3;
    string fans="";
    fans =gP(x,k);
    cout<<fans;
    return 0;
}
