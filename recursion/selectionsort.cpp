#include <iostream>
using namespace std;

void selection(int *arr, int n){
    if(n==0 || n==1)
        return;
    
 
    int i=0;
    while(i<n-1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        i++;
    }
    selection(arr+1,n-1);
}


// void printArr(int *arr,int n){
//     if(n==0)
//         return;
    
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     printArr(arr+1,n-1);
// }

int main(){
    int arr[5]={2,1,5,8,9};
    selection(arr,5);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    // printArr(arr,5);

    return 0;
}

