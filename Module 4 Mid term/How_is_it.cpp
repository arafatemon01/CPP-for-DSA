#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id ;
    string name;
    char section ;
    int mark;

};
int main (){
int t;
cin>>t;
while (t--){
    Student a, b, c;
    cin>> a.id>>a.name>>a.section>>a.mark;
    cin>>b.id>>b.name>>b.section>>b.mark;
    cin>>c.id>>c.name>>c.section>>c.mark;
    
    Student top_mark=a;
    if (b.mark >top_mark.mark){
        top_mark = b;
    }else if (b.mark == top_mark.mark){
        if (b.id<top_mark.id){
            top_mark = b;
        }
    }

    if (c.mark>top_mark.mark){
        top_mark = c;
    }else if (c.mark == top_mark.mark){
      if (c.id<top_mark.id){
        top_mark = c;
      }
    }
// cout << a.id << " " << a.name << endl;
// cout << b.id << " " << b.name << endl;
// cout << c.id << " " << c.name << endl;
cout << top_mark.id << " "<< top_mark.name << " "<< top_mark.section << " "<< top_mark.mark << endl;

}
return 0;
}