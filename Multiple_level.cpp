//Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

class Curry{
    public:
    string curry1="Panner";
    string curry2="Kofta";
};
class Bread{
    public:
    string bread1="Naan";
    string bread2="Roti";
};

class Meal: public Curry , public Bread{
    public:
    string meal1=curry1+" and "+bread1;
    string meal2=curry1+" and "+bread2;
    string meal3=curry2+" and "+bread1;
    string meal4=curry2+" and "+bread2;
};

int main(){
    Meal mymeal1,mymeal2,mymeal3;
   
    cout<<"Your choice of meal is: "<<mymeal1.meal1<<endl;
    cout<<"Your choice of meal is: "<<mymeal2.meal4<<endl;
    cout<<"Your choice of meal is: "<<mymeal3.meal2<<endl;
}
/* output
Your choice of meal is: Panner and Naan
Your choice of meal is: Kofta and Roti
Your choice of meal is: Panner and Roti
*/
