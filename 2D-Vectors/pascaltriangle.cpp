#include<bits/stdc++.h>
using namespace std;
void print(const vector<vector<int>> &x){
    for(int i=0;i<x.size();i++){
        for(int j=0;j<x[i].size();j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}
vector<vector<int>> input(int n){
    vector<vector<int>> v;
    long long row=0;
    for(int i=0;i<n;i++){
        vector<int> a;
        long long fval=1;
        for(int j=0;j<=i;j++){
            a.push_back(fval);
            fval=fval*(row-j)/(j+1);
        }
        v.push_back(a);
        row++;
    }
    return v;

}
int main(){
    int n;
    cout<<"Enter any n for pascal tri angle : ";
    cin>>n;
    vector<vector<int>> ans =input(n);   
    print(ans);
    return 0;
}
