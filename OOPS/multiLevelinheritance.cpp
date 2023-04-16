#include <iostream>
using namespace std;

class Animal{
    public:
    string type;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
    
    

};

class Dog:public Animal{

    public:
    string name;
    public:
    void breed(){
        cout<<"Breed"<<endl;
    }
 
};

class GermanShepherd:public Dog{

};

int main(){

    GermanShepherd d1;
    d1.speak();
    d1.breed();
    
}