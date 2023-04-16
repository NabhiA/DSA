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
    string breed;
 
};

int main(){

    Dog d1;
    d1.speak();
}