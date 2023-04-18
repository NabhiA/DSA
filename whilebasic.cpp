#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:"<<endl;
    cin>>n;
    int sum;
    sum = 0;
    int num = 2;
    while (num < n){
        if (num%2==0){
            sum = sum + num;
            num = num+1;

        }
        else{
            num=num+1;

        }
        
    }

 
// for (int num=2; num <n ; num++)
// {
//     if (num%2==0)
//     {
//         sum = sum + num;
//     }
    
// }
   cout<<"sum:"<<sum;
    return 0 ;
}



