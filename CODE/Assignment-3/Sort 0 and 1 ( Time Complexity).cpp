// Take as input N, a number. Take N more inputs to form an array. The array contains only 0 and 1. Sort the array in a single scan.
// Sample Input - 5 1 1 1 0 0
// Sample Output- 0 0 1 1 1 
// BRUTEFORCE METHOD : 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	int count = 0;
 	for (int j = 0; j < len; j++) 
	 { 
        if (arr[j] == 0) q	
            count++; 
    } 
	for (int j = 0; j < count; j++) 
        arr[j] = 0; 

	for (int j = count; j < len; j++) 
        arr[j] = 1; 

	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}


	return 0;
}

#OPTIMISED SOLUTION 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int len){
	int left=0;
	int right=len-1;

	while(left<right){
		if(arr[left]==1){
			swap(arr[left],arr[right]);
			right--;
		}
		else 
			left++;
	}
}
void display(int arr[], int len){
	for (int i=0;i<len;i++){
		cout<<arr[i]<<" ";
		}
}
// Driver code 
int main()
{
	int len; cin>>len;
	int arr[len];
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	sort(arr,len);
	display(arr,len);
}
