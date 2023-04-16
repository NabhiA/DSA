#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};

int main(){

    C obj1;
    obj1.func1();
    // obj1.func2();
    obj1.func3();

    B obj2;
    obj2.func1();
    obj2.func2();

    return 0;
}