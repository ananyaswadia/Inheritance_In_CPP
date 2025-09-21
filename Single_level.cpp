//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Vehical{     //base class
    public:
    string brand="Ford";
    void color(){
        cout<<"Red \n";
    }
   
};
class Car: public Vehical{   //derived class
    public:
    string model="Mustang";
};

int main(){
    Car mycar;
    cout<<"Car present in-store: "<<mycar.brand<<"-"<<mycar.model<<endl;
    cout<<"Colour available is: ";
    mycar.color();
}
/* output
Car present in-store: Ford-Mustang
Colour available is: Red

*/
