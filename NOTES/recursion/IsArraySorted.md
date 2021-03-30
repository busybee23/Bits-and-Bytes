Problem Statement : To check whether a given array is sorted or not.
Video : same as other recursion and time stamps are also provided.
 
```
// Time Stamp : Session 17, 2:10:10 around 

#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
	// base case 
    if(n==0 || n==1){
		return true;
	}
	else {
		if(isSorted(arr+1,n-1) == true && arr[0]<arr[1]){
			return true;
		}
		else {
			return false;
		}
	}
}

int main(){
	int n;cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>> arr[i];
	}

	if(isSorted(arr,n)){
		cout<<"Sorted"<<endl;
	}
	else {
		cout<<"Not Sorted"<<endl;
	}
}
```