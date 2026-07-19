#include<bits/stdc++.h>
using namespace std;
void print(vector<int> x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={1,3,2,4,3,4,1,6};
    print(v);
    reverse(v.begin(),v.end());
    print(v);
    return 0;

}
