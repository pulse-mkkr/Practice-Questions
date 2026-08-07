#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int x=45,y=27;
    cout<<gcd(x,y);
    return 0;
}
