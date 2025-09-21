//Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

class Material{
    public:
    string material1="Cotton";
    string material2="Nylon";
    string material3="Polyster";
};
class Length:public Material{
    public:
    int a=3;
    int b=5;
    int c=6;
    int d=10;
};
class Cloth : public Length{
    public:
    string cloth1="Shirt";
    string cloth2="Trousers";
    string cloth3="Blazer";
};

int main(){
    Cloth mycloth,mycloth2;
   
    cout<<"Order 1: "<<mycloth.material1<<"-"<<mycloth.cloth1<<endl;
    cout<<"Amount of material to be used for order 1 is: "<<mycloth.a<<" meters"<<endl;
   
    cout<<endl<<"Order 2: "<<mycloth2.material3<<"-"<<mycloth2.cloth3<<endl;
    cout<<"Amount of material to be used for order 2 is: "<<mycloth2.b<<" meters";
}
/* output
Order 1: Cotton-Shirt
Amount of material to be used for order 1 is: 3 meters

Order 2: Polyster-Blazer
Amount of material to be used for order 2 is: 5 meters
*/
