#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
#include <climits>
int main() {
	int len,max_val = INT_MIN; 
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	for(int i=0l;i<len;i++){
		if(arr[i]>max_val){
			max_val = arr[i];
		}
	}
	cout<<max_val;
	return 0;
}
