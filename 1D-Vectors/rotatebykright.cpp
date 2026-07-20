#include<iostream>
#include<vector>
using namespace std;
// void swap(int &x,int &y){
//     int temp = x;
//     x=y;
//     y=temp;
//     return;
// }
void reverse(vector<int> &v,int x,int y){
    for(int i=x,j=y;i<j;i++,j--){
        swap(v[i],v[j]);
    }
}
void print(const vector<int> &x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int n;
    cout<<"Enter times you want to rotate : ";
    cin>>n;
    if(n<0) return 0;
    int size=v.size();
    int k =n%size;
    if(k==0){
        print(v);
        return 0;
    }
    reverse(v,0,size-1);//rotate whole 
    print(v);
    reverse(v,0,k-1);//till k-1
    print(v);
    reverse(v,k,size-1);//remaining
    print(v);
    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &x,int &y){
//     int temp = x;
//     x=y;
//     y=temp;
//     return;
// }
// void print(vector<int> x){
//     for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// int main(){
//     vector<int> v={1,2,3,4,5,6,7};
//     int n;
//     cout<<"Enter times you want to rotate : ";
//     cin>>n;
//     if(n<0) return 0;
//     int size=v.size();
//     for(int i=0,j=size-1;i<j;i++,j--){
//         swap(v[i],v[j]);
//     }
//     // print(v);
//     int k =n%size;
//     for(int i=0,j=k-1;i<j;i++,j--){
//         swap(v[i],v[j]);
//     }
//     // print(v);
//     for(int i=k,j=size-1;i<j;i++,j--){
//         swap(v[i],v[j]);
//     }
//     print(v);
//     return 0;
// }
