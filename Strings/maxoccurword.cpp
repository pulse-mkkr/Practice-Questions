#include<bits/stdc++.h>
using namespace std;
int main(){
    string s=" aisheteru is aisheteru a  aisheteru. He aisheteru is  aisheteru  a well.";
    stringstream ss(s);
    string temp;
    vector<string> ans;
    while(ss>>temp){
        ans.push_back(temp);
    }
    sort(ans.begin(),ans.end());
    int maxc=1;
    int c=1;
    for(int i=1;i<ans.size();i++){
        if(ans[i]==ans[i-1])c++;
        else c=1;
        maxc=max(maxc,c);
    }
    cout<<maxc<<endl;
    c=1;
    for(int i=1;i<ans.size();i++){
        if(ans[i]==ans[i-1])c++;
        else c=1;
        if(c==maxc)cout<<ans[i]<<" "<<maxc<<endl;

    }

    return 0;
}
