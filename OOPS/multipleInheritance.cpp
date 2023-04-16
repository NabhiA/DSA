#include <iostream>
using namespace std;

class Human
{
public:
    string type;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog
{

public:
    string name;

public:
    void bark()
    {
        cout << "Bark" << endl;
    }
};

class Hybrid : public Dog, public Human
{
};

int main()
{
    Hybrid h1;
    h1.bark();
    h1.speak();
}