#include <iostream>
using namespace std;

class Human{

    protected:
    int weight;

    public:
    int age;

    // private:
    int height;

    public:

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }


};

class Male:public Human{

    public:
    string color;

    public:
    void sleeping(){
        cout<<"Male sleeping"<<endl;
    }
    int getWeight(){
        return this->weight;
    }
    int getHeight(){
        return height;
    }

};


int main(){

    Male m1;
    m1.setWeight(84);
    cout<<m1.getWeight()<<endl;
    // m1.color="Black";
    // cout<<m1.color<<endl;
    
    return 0;
}
