#include<bits/stdc++.h>
using namespace std;
void moves(int x,char a,char b,char c){
    if(x==0)return;
    moves(x-1,a,c,b);
    cout<<a<<" to "<<c<<endl;
    moves(x-1,b,a,c);
}

int main(){
    moves(5,'s','h','d');
    return 0;
}
