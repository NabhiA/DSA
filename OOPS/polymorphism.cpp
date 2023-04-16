#include <iostream>
using namespace std;

class Animal{

    public:
    void function(){
        cout<<"Fucntion1 "<<endl;
    }
    int function(int n){
        cout<<"Fucntion1 but different "<<n<<endl;
        return 1;
    }
    void speak(){
        cout<<"Speaking"<<endl;
    }


};
class Dog:public Animal{

    public:
    void speak(){
        cout<<"Barking"<<endl;
    }

};

int main(){

    Dog d1;
    d1.speak();
    d1.function();
    d1.function(0);

    return 0;
}