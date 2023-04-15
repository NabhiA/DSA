#include <iostream>
using namespace std;


int main(){

    int arr[5]={4,5,2,3,1};
    int n=5;

    for(int i=0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            
            if(arr[j+1]<arr[j]){

                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

        // int A[5]={-1,-2,-3,-4,-5};

        // int maxi= INT32_MIN;
    	// int mini= INT32_MAX;
    	
    	// for(int i=0;i<5;i++){
    	//     maxi=max(A[i],maxi);
        //     cout<<maxi<<" ";
    	// }
        // cout<<endl;
    	// for(int i=0;i<5;i++){
    	//     mini=min(A[i],mini);
        //     cout<<mini<<" ";
    	// }
    	
    	// cout<<maxi+mini<<endl;
    
    return 0;

    
} 


