#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Student{
   public:
   string name;
   int roll;
   int math_mark;
   int cls;
   // constructor
     Student ( string n,int r,int m,int c){
        name = n;
        roll = r;
        math_mark = m;
        cls = c;
     }
};
int main (){
Student s1 ("Arafat",50,20,1);
Student s2 ("Rahim",50,30,2);
Student s3 ("karim",34,5,3);

Student highest = s1;
if (s2.math_mark > highest.math_mark){
    highest = s2;
}if (s3.math_mark>highest.math_mark){
    highest = s3;
}
cout<<"Highest Math Marks: "<< highest.math_mark<<endl;
cout<<"Student name : "<< highest.math_mark<<endl;

return 0;
}