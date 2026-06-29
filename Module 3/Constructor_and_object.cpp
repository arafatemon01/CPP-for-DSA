#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    int classRoll;
    double gpa;

};
int main (){
    Student arafat;
    arafat.id = 101;
    arafat.classRoll = 10;
    arafat.gpa = 3.75;
    Student emon;
    emon.id = 232;
    emon.classRoll = 21;
    emon.gpa =4.5;

cout<<arafat.id<<" "<<arafat.classRoll<<" "<<arafat.gpa<<endl;  
cout<<emon.id<<" "<<emon.classRoll<<" "<<emon.gpa<<endl;  

}