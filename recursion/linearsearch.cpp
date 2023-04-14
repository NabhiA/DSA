#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    cout<<"Size: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearSearch(int *arr,int n, int k){
    printArray(arr,n);
    if(n==0)
        return false;
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,n-1,k);
        return remainingPart;
    }
}

int main(){
    int arr[5]={3,5,2,7,1};
    int n=5;
    int key=2;
    bool ans=linearSearch(arr,n,key);

    if(ans){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }

    return 0;
}