#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    int classRoll;
    double gpa;


    Student (int i,int r,double g){
        id = i;
        classRoll = r;
        gpa = g;
    }

};
int main (){
  Student arafat (101,22,4.5);
  Student emon ( 201,33,4.5);

cout<<arafat.id<<" "<<arafat.classRoll<<" "<<arafat.gpa<<endl;  
cout<<emon.id<<" "<<emon.classRoll<<" "<<emon.gpa<<endl;  

}