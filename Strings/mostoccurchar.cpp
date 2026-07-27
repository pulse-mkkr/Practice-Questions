#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>sp(26,0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int p=(int)ch;
        sp[p-97]++;
    }
    int max=0;
    for(int i=0;i<sp.size();i++){
        if(sp[i]>max)max=sp[i];
    }
    for(int i=0;i<sp.size();i++){
        if(max==sp[i]){
            cout<<(char)(i+97)<<" appeared "<<max<<" times.";
            break;
        }
        
    }
    return 0;
}
