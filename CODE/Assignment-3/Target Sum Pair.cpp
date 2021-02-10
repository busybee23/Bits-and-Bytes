#include <bits/stdc++.h> 
using namespace std;
int main() {
	int num;
	cin >> num;
	int arr[num];
	for(int i=0;i<num;i++)
		cin >> arr[i];
	int tar;
	cin >> tar;
	sort(arr,arr+num);
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(arr[i]+arr[j] == tar)
			cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
		}
	}
}
