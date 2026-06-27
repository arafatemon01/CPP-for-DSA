#include <bits/stdc++.h>
using namespace std;
class Student  
{
    public:
    string name;
    int cls;
    char section ;
    int id;

};
int main (){
   int n;
   cin>>n;
   Student arr[n];
   for (int i=0;i<n;i++){
       cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id;
   }
        
    for (int i=0,j=n-1;i<j;i++,j--){
        swap (arr[i].section,arr[j].section);
    }
     
      for (int i=0;i<n;i++){
       cout<<arr[i].name<< " "<< arr[i].cls<< " "<< arr[i].section<< " "<< arr[i].id<<endl;

    }
     
   

}