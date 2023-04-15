#include<iostream>
using namespace std;

int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {
        
        // cout<<"a: "<<a<<endl;
        // cout<<"b: "<<b<<endl;

        // cout<<"res: "<<res<<endl;
        if(b&1) {
            //odd
            res = res*a;
            // cout<<"res: "<<res<<endl;
        }
        b = b >> 1;
        a = a * a; 
        // cout<<"a after multiply: "<<a<<endl;
    }
    return res;
}


int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a,b) << endl;

    return 0;
}
