#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double GPA;
};
int main (){
   Student a;
   char temp[100] = "Arafat";
   strcpy (a.name , temp);
   a.roll = 20;
   a.GPA = 4.5;

   cout<<a.name<< " "<<a.roll<< " "<< a.GPA<<endl;
   return 0;
}