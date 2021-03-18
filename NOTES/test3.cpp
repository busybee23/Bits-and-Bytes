#include<bits/stdc++.h>
using namespace std;
#include<iostream>
int main() 
{
	int t;cin>>t;
	while(t--)
	{
		int N;cin>>N;
		vector<int>arr1(N);
		vector<int>arr2(N,0);
		for(int i=0;i<N;i++)cin>>arr1[i];
		arr2[N-1] = arr1[N-1];
		for(int i=N-2;i>=0;i--)
		{
			if(arr2[i+1]>arr1[i])arr2[i] = arr2[i+1];
			else arr2[i] = arr1[i];
		}
		long long int diff = 0;
		for(int i=0;i<N;i++)
		{
			if(diff < arr2[i]-arr1[i])
			{
				diff = arr2[i]-arr1[i];
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}
