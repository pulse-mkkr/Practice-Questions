#include<bits/stdc++.h>
using namespace std;
void subset(string c,string o){
    
    if(o==""){
        cout<<"{"<<c<<"} ";
        return;
    }
    subset(c+o[0],o.substr(1));
    subset(c,o.substr(1));
}
int main(){
    string str="1234 ";
    subset("",str);
    return 0;
}
