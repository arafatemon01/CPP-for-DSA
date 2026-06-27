#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while (getline (cin,s)){
        string t = "";
        for (int i=0;i<s.size();i++){
            if (s[i] != ' '){
                t = t+ s[i];
            }
        }
        sort (t.begin(),t.end());
        cout<< t <<endl;
    }
}