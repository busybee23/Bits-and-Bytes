#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n,r=3;cin>>n;
    // int arr[n];

    if(n==3){
        return 1;
    }
    
    // for(int i=0;i<n;i++){
    //     cin>arr[i];
    // }

    cout<<fact(n)/(fact(r)*fact(n-r)) ;
}