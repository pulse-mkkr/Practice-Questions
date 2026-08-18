#include<bits/stdc++.h>
using namespace std;
int b2d(string &s){
    int n=s.size();
    int ans=0;
    for(int i=n-1;i>=0;i--){
        int ch=s[i]-'0';
        ans+=(ch*(1<<(n-i-1)));
    }
    return ans;
}
string d2b(int a){
    string ans="";
    while(a!=0){
        if(a%2==0)ans="0"+ans;
        else ans="1"+ans;
        a=a>>1;
    }
    return ans;
}
int setbits(string s){//setbits
    int n=b2d(s);
    int cnt=0;
    while(n>0){
        n=(n&(n-1));
        cnt++;
    }
    return cnt;
}
int hipow2(int n){//maximum power of2 
    int temp=n;
    while(n>0){
        temp =n;
        n=(n&(n-1));
    }
    return temp;
}

int main(){
    string s="10101";
    int n=b2d(s);
    cout<<n<<endl;
    cout<<d2b(n)<<endl;
    cout<<setbits(s)<<endl;
    cout<<hipow2(n);

    
    return 0;
}
