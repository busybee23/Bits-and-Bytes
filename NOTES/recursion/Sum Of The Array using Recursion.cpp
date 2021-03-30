## Problem Statement : Find the sum of the array
Video :  

#include<iostream>
using namespace std;

int frontsum(int *arr, int n){
    if(n==0){
        return 0;
    }

    return arr[0]+(sum(arr+1,n-1));
}

int behindsum(int *arr, int n){
    if(n==0){
        return 0;
    }
    return behindsum((arr,n-1)+arr[n-1]);
}


int main(){
    int arr[]={4,2,1,3,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<frontsum(arr,n)<<endl;
    cout<<behindsum(arr,n)<<endl;
    cout<<usingiteratorsum(arr,n)<<endl;
}
