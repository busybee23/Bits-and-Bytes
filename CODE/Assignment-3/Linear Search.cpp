#include <bits/stdc++.h> 
using namespace std; 
void log(long long int arr[],long long int len,long long int tar)
{
	int count=0;
	for(int i=0;i<len;i++)
	{
		
		if(arr[i] == tar)
		{
			cout<<i;
			count=1;
			break;
		}
	}
	if(count==0)
		cout<<"-1";
	
}
int main() {
	long long int len;
	cin >> len;
	long long int arr[len];
	for(int i=0;i<len;i++)cin >> arr[i];
	long long int tar;
	cin >> tar;
	log(arr,len,tar);
}
