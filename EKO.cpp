#include <iostream>
using namespace std;

bool possible(int arr[],int n, int mid, int m){
    int sum=0;
    for (int i=0; i<n; i++){
        if(arr[i]>mid){
            sum += arr[i]-mid;
        }
    }
    if(sum>=m){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int arr[5]={4,42,40,26,46};
    int m=20;
    int e=-1;
    int s=0;
    int ans=1;

    for(int i=0;i<5;i++){
        e=max(e,arr[i]);
    }
    
    int mid=s+(e-s)/2;

    while(s<e){
        if(possible(arr,5,mid,m)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    
    cout<<ans;
    return 0;
}
