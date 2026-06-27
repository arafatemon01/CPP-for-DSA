#include <bits/stdc++.h>
using namespace std;
class Crickter {
    public:
    int jersey_no;
    string country;
};
int main(){
    // creating dynamic object dhoni
    Crickter *dhoni = new Crickter;
    dhoni->jersey_no = 7;
    dhoni->country = "india";
     
   // creating another dynamic object kohli
   Crickter *kohli = new Crickter;

     //wrong (just pointer copy)
     // kohli = dhoni;

     // correct: manual copy
      kohli->jersey_no = dhoni->jersey_no;
      kohli->country = dhoni->country;

      // delete dhoni object
      delete dhoni;
      dhoni = NULL;

      // print kohli data
      cout << "jersey no: "<<kohli->jersey_no<<endl;
      cout<< "country : "<<kohli->country<<endl;

      // free kohli memory
      delete kohli;
      kohli =NULL;

      return 0;
}