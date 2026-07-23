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
void input(vector<vector<int>> &inp){
    cout<<"Enter elements : ";
    for(int i=0;i<inp.size();i++){
        for(int j=0;j<inp[i].size();j++){
            cin>>inp[i][j];
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter number rows and colums for first matrix :";
    cin>>m>>n;
    vector<vector<int>> m1(m,vector<int>(n));
    input(m1);
    int p,q;
    cout<<"Enter number rows and colums for second matrix :";
    cin>>p>>q;
    vector<vector<int>> m2(p,vector<int>(q));
    input(m2);
    print(m1);
    print(m2);
    if(n!=p){
        cout<<"Matrices cant be multiplied when column of 1st and row of 2nd are different";
        return 0;
    }
    vector<vector<int>> ans(m,vector<int>(q));
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            int ansum=0;
            for(int k=0;k<n;k++){
                ansum+=m1[i][k]*m2[k][j];
            }
            ans[i][j]=ansum;
        }
    }
    print(ans);
    
    
    return 0;
}
