#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    // for (int i = 0;i<t;i++){}
    while (t--){
        int n,terget;
        cin>>n>>terget;
        
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool found = false;
        for (int i=0;i<n;i++){
            for (int j = i+1;j<n;j++){
                for (int k=j+1;k<n;k++){
                    if (arr[i]+arr[j]+arr[k]== terget){
                        found = true;
                    }
                }
            }
        }
   if (found == true){
    cout<< "YES"<<endl;
   }else{
    cout<< "NO"<<endl;
   }
    }
    return 0;
}