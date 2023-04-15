#include <iostream>
using namespace std;

// int main(){
//     int num[12] = {1,2};
//     cout<<num<<endl;
// } 

// int array_Max( int arr[] , int n){
//     int maxi = INT32_MIN;
//     for (int i=0; i<n ; i++){
//         // if(arr[i]>max){
//         //     max = arr[i];
//         // }
//         maxi = max(maxi,arr[i]);
//     }
//         return maxi;
// }

// int array_Min(int arr[],int n){
//     int mini = INT32_MAX;
//     for (int i=0; i<n; i++){
//         mini = min(mini,arr[i]);

//     }
//     return mini;
// }


// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i = 0; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<array_Max(num,size)<<endl;
//     cout<<array_Min(num,size)<<endl;

// }

// #include<iostream>
// using namespace std;

// int getMin(int num[], int n) {

//     int mini = INT32_MAX;
    
//     for(int i = 0; i<n; i++) {
        
//         // mini = min( mini, num[i]);
        
//         if(num[i] < mini){
//            mini = num[i];
//         }
//     }

//     //returning min value
//     return mini;
// }

// int getMax(int num[], int n) {

//     int maxi = INT32_MIN;
    
//     for(int i = 0; i<n; i++) {

//         maxi = max(maxi, num[i]);

//        // if(num[i] > max){
//          //   max = num[i];
//        // }
//     }

//     //returning max value
//     return maxi;
// }

// int main() {

//     int size;
//     cin >> size;

//     int num[100];

//     //taking input in array
//     for(int i = 0; i<size; i++) {
//         cin >> num[i];
//     }

//     cout << " Maximum value is " << getMax(num, size) << endl;
//     cout << " Minimum value is " << getMin(num, size) << endl;


//     return 0;
// }  
void reverse(int arr[], int m,int n){
    int start = m;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    reverse(arr1,1, 6);
    print(arr1,6);


}
