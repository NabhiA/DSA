#include <iostream>
using namespace std;

int main(){
    
    char a;
    cin>>a;
    if (a>= 'A' && a<= 'Z')
    {
        cout<<"this is upper\n";

    }
    else if (a>= 'a' && a<='z'){
        cout<<"this is lower";

    }
    else if (a>= '0' && a<='9'){
        cout<<"this is num";

    }
}
