#include <iostream>
using namespace std;

void sayDigits(int n, string arr[]){
    if(n==0)
        return;
    int digit=n%10;
    n=n/10;
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10]={"Zero","One","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

    sayDigits(n,arr);
    return 0;
}

