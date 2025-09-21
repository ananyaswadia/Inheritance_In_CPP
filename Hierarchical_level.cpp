//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Organism{
    public:
    Organism(){
        cout<<"Organism : Mammal \n";
    }
};
class Type1:public Organism{
    public:
    Type1(){
        cout<<"Type : Dog \n";
    }
};
class Type2: public Organism{
    public:
    Type2(){
        cout<<"Type : Cats \n";
    }
};
class Species1:public Type1{
    public:
    Species1(){
        cout<<"1. Doberman \n";
        cout<<"2. Golden Retriever \n";
    }
};
class Species2:public Type2{
    public:
    Species2(){
    cout<<"1. Persian cat \n";
    cout<<"2. Ragdoll \n";
    }
};

int main(){
    Species1 s1;
    cout<<endl;
    cout<<endl;
    Species2 s2;
   
}
/* output
Organism : Mammal
Type : Dog
1. Doberman
2. Golden Retriever


Organism : Mammal
Type : Cats
1. Persian cat
2. Ragdoll

*/
