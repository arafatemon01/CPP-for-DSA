#include <iostream>
using namespace std;
int main() {
    int A,B;
    char C;
    cin>>A>>C>>B;
    if(C=='>'){
        if (A>B){
            cout<<"Right";
        }else {
            cout<<"Wrong";
        }
    }
    else if (C=='<'){
        if (A<B){
            cout<<"Right";
        }else {
            cout<< "Wrong";
        }
    }else if (C=='='){
        if (A==B)
        cout<<"Right";
        else 
        cout<< "Wrong";
    }
    return 0;
}