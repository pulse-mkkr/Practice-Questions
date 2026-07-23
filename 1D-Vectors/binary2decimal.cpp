#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v={1,1,0,1,0,1,1,1,0,1,0};
    int deci=0;
    int x=1;
    for(int i=v.size()-1;i>=0;i--){
        deci+=v[i]*x;
        x*=2;
    }
    cout<<deci;
    return 0;
}
