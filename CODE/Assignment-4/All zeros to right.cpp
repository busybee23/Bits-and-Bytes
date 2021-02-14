#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int len,count; cin>>len;
	int arr[len];
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	for(int i=0; i<len;i++){
		
		if(arr[i]==1)
			count++;
	}
	for(int i=0;i<count;i++){
		arr[i]=1;
	}
	for(int i=count;i<len;i++){
		arr[i]=0;
	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}