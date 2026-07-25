#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(i==0){
            if(s[i]!=s[i+1])count++;  
        }
        else if(i==s.size()-1){
            if(s[i]!=s[i-1])count++;
        }
        else if(s[i]!=s[i-1] && s[i]!=s[i+1])count++;
    }
    cout<<count;
    return 0; 
}
