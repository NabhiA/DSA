#include <iostream>
using namespace std;

void bubble(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        bool isSwapped=false;
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            isSwapped=true;
        }
        if(isSwapped==false){
            return;
        }
    }
    bubble(arr,n-1);
}

int main(){

    int arr[5]={1,2,3,4,5};
    bubble(arr,5);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}


