#include <iostream>
using namespace std;
int main(){
    char X;
    cin>>X;
    if (X>=65 && X<=90){
        cout<<"ALPHA"<<'\n'<<"IS CAPITAL";
    }else if (X>=97 && X<=122){
        cout<<"ALPHA" << '\n' << "IS SMALL";
    }else if (X>='0' && X<='9'){
          cout << "IS DIGIT";
    }

}