Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.
```
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	int num; 
	cin>>num;
    cout<<"1"<<endl;
    for(int i = 1; i<num; i++)
	{
        cout<<i;
        for(int j = 1; j<i; j++) 
		cout<<"0";
        cout<<i;
    	cout<<endl;
    }
	return 0;
}
```
