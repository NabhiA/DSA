#include <iostream>
using namespace std;

int binarySearch( int arr[] , int size , int key){
    
    int start = 0;
    int end = size-1;
    
    //This is done to avoid the overflowing of integer value 
    //of start and end are added
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }
        
        else if(arr[mid] < key){
            start = mid+1;
        }
        
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}

int main(){
    
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {1,2,3,4,5};

    int evenArray = binarySearch(arr1,6,14);
    cout<<"the index of 14 is: "<<evenArray<<endl;

    int oddArray = binarySearch(arr2,5,20);
    cout<<"the index of 20 is: "<<oddArray<<endl;

}