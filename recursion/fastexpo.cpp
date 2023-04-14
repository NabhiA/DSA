#include<iostream>
using namespace std;

int fastPower(int a, int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans=fastPower(a,b>>1);
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }

}


int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;

    int ans=fastPower(a,b);
    cout<<ans;

    return 0;
}

