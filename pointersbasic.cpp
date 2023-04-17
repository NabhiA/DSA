#include <iostream>
using namespace std;

void swap(char *x, char*y){

    cout<<" Address of *x:"<<&x<<endl;
    cout<<" Address of *y:"<<&y<<endl;
    char *t=x;
    x=y;
    y=t;


}


int main(){

    // int num =5;
    // int *ptr=&num;

    // cout<<ptr<<endl;

    // int *p =0;
    // cout<<*p;

    // int arr[10]={1,2,3,4};

    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;

    // cout<<&*arr;
    // return 0;

    // char temp1='2';
    // char *p=&temp1;
    // cout<<p<<endl;

    // char *x="ninjasquiz";
    // char *y="codingninjas";
    // cout<<" Address of *x:"<<&x<<endl;
    // cout<<" Address of *y:"<<&y<<endl;

    // char *t;
    // swap(x,y);
    // cout<<x<<" "<<y;
    // t=x;
    // x=y;
    // y=t;
    // cout<<" "<<x<<" "<<y;
    // return 0;

    int i=5;
    int *p1=&i;
    int **p2=&p1;

    cout<<p2<<endl;
    cout<<&p1<<endl;

    cout<<*p1<<endl;
    cout<<**p2<<endl;

}


