#include <iostream>
using namespace std;

int smallest(int arr[], int n){
    // if(s>=n)
    //     return INT32_MAX;
    // int mini=INT32_MAX;
    // mini=min(mini,smallest(arr,s+1,n));

    
    // return mini;
    int mini=INT32_MAX;
    if(n==1){
        mini=arr[0];
        return mini;
    }

    else{
        
        mini =  min(arr[n-1],smallest(arr,n-1));
        return mini;
    }
}

int main(){

    int arr[5]={1,2,0,-9,1};
    int n=5;
    int ans = smallest(arr,n);
    cout<<ans;

    return 0;
}
