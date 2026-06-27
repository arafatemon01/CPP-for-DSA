#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_mark;
    int eng_mark;
    
};
bool cmp (Student left, Student right)
{
   if (left.eng_mark > right.eng_mark)
    {
    return true;
   }
   else if (left.eng_mark == right.eng_mark)
   {
    if (left.math_mark > right.math_mark)
    {
        return true;
    }else if (left.math_mark == right.math_mark){
             if (left.id<right.id){
                return true;
             }else {
                return false;
             }
    }else 
    {
      return false;
    }
   }else 
   {
    return false;
   }
}

int main(){
int n;
cin>>n;
 Student arr[n];
 for (int i=0;i<n;i++)
 {
    cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id>>arr[i].math_mark>>arr[i].eng_mark;
 }
 sort (arr,arr+n,cmp);
 for (int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].math_mark<<" "<<arr[i].eng_mark<<endl;
 }
 return 0;
 }