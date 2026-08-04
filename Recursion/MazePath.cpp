#include<bits/stdc++.h>
using namespace std;
long long ways(long long a,long long b){
    if(b==1||a==1)return 1;
    return ways(a,b-1)+ways(a-1,b);
}

int main(){
    cout<<ways(3,200);
    return 0;
}
