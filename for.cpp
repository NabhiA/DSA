#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    bool isPrime=1;
    for (int i=2; i<n; i++){
        if(n%i==0){
            // cout<< n << " is not a prime number for "<< i <<endl;
            isPrime=0;
            break;
            
        }
    }
    if (isPrime==0){
        cout<<"not a prime number"<<endl;

    }
    else{
        cout<<"its a prime number"<<endl;
    }
    

    
}


