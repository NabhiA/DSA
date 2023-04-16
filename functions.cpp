#include <iostream>
using namespace std;

void PrintCount( int(num)){
    for( int i = 1 ; i<=num ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin>>n;
    PrintCount(n);
}


//Factorial
// int Factorial(int n){
   
//     if(n>1){
//     return n=n*Factorial(n-1);
//     }
    
//     return 1;
// }

/*
int main(){
    int n;
    cin>>n;
    int ans = Factorial(n);
    cout<<ans;
}
*/




/*Even And Odd
*/
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isEven(n)){
//         cout<<"Even"<<endl;
//     }
//     else{
//         cout<<"Odd"<<endl;

//     }
// }

// int Pow(){
//     int a,b;
//     cin>>a>>b;

//     int ans=1;

//     for(int i = 1; i<=b ; i++){
//         ans = ans*a;
//     }
//     return ans;
// }

// int main(){
//     int answer=Pow();
//     cout<<answer;
// }






/* nCr 
int factorial(int n){
    if(n>1){
        return n = n*factorial(n-1);
    }
    else{
        return 1;
    }
}

int nCr(int n ,  int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    int ans = num/den;
    return ans;

}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<ans;
} 

*/
