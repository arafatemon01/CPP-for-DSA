#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    int classRoll;
    double gpa;
Student (int id,int classRoll,double gpa){
    this->id = id ;
    this->classRoll = classRoll;
    this -> gpa = gpa;
}
     Student fun (){
        Student emon (201,11,4.56);
        return emon;
     }
};
int main(){
    // Student arafat (101,22,4.5);
    Student obj = obj.fun();
    cout<<obj.id<<" "<<obj.classRoll<<" "<<obj.gpa<<endl;

    // cout<<arafat.id << " "<< arafat.classRoll << " "<<arafat.gpa << endl;
    return 0;
}