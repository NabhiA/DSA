#include <iostream>
using namespace std;

// void printArray(int *arr, int s, int e){
//     for(int i=s; i<=e;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

bool binarySearch(int *arr, int s,int e, int k){
    
    // printArray(arr,s,e);
    if(s>e)
        return 0;
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
  
}


int main(){

    int arr[5]={3,5,8,9,10};
    int n=5;
    int key=8;
    int s=0;
    int e=4;
    if(arr[0]==key||arr[e]==key){
        cout<<"Key found";
    }
    else{
        bool ans=binarySearch(arr,s,e,key);

        if(ans){
        cout<<"Key found";
        }
        else{
        cout<<"Key not found";
        }
    }
    
    return 0;
}


