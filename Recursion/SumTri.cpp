#include<bits/stdc++.h>
using namespace std;
void sumTri(vector<int> &a){
    
    vector<int> v;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<a.size()-1;i++){
        v.push_back(a[i]+a[i+1]);
    }
    if(v.size()==0)return;
    sumTri(v);
}

int main(){
    vector<int> arr={5,4,3,2,1};
    sumTri(arr);
    return 0;
}
