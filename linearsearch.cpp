#include <iostream>
using namespace std;

bool findKey(int arr[] , int n ,int key){
    for (int i=0; i<n; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}

void reverseArr(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alternate(int arr[], int n){
    
    for (int i = 0; i<n; i+=2){
    
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}


int sumOfElement(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum+arr[i];
    }
    return sum;
}


int main(){

    // int arr[5] = {1,2,3,4,5};
    int arr1[6] = {1,2,3,4,5,6};
    // int key;
    // cout<<"enter the key to be found"<<endl;
    // cin>>key;
    // bool found = findKey(arr,5,key);
    // if(found){
    //     cout<<"Key present"<<endl;
    // }
    // else{
    //     cout<<"Key absent"<<endl;
    // }
    //reverseArr(arr1,6);
    swap_alternate(arr1,6);
    printArr(arr1,6);
    // cout<<"the sum is "<<sumOfElement(arr1,5);
   
    

}


