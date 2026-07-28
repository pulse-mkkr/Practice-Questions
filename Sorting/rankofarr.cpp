#include<bits/stdc++.h>
using namespace std;
void print(const vector<int> x){
    for(int pt : x){
        cout<<pt<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={19,12,23,8,16};
    print(v);
    vector<int>isv(v.size(),0);
    int count=0;
    for(int i=0;i<v.size();i++){
        int smt=INT_MAX;
        int sidx=-1;
        for(int j=0;j<v.size();j++){
            if(v[j]<smt&&isv[j]==0){
                smt=v[j];
                sidx=j;
            }
        }
        isv[sidx]++;
        v[sidx]=count++;
    }
    print(isv);
    print(v);

    return 0;

}
