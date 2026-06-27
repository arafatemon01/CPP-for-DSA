#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        string s,r;
        cin>>s>>r;
        while (true){
            int idx = s.find (r);
          if (idx == -1){
            break;
          }
          else {
            s.replace (idx,r.size(),"#");
          }
        }
        cout<<s<<endl;
     
    }
}