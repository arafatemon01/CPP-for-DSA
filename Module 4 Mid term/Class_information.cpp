#include <bits/stdc++.h>
using namespace std;
class Student {
  int id;
  string name;
  char section;
  int mark;  
};
int main(){
    int t;
    cin>>t;
    while (t--){
        Student s[3];
        for (int i=0;i<3;i++){
            cin>>s[i].id>>s[i].name>>s[i].section>>s[i].mark;
        }
    }
}