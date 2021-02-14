```
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int num; 
	cin>>num;
	for(int i = 1; i<=num; i++){
		for(int j = 1; j<i; j++) cout<<" ";

		// for stars
		for(int j = num-i+1; j>0; j--){
			cout<<"* ";
		}cout<<endl;
	}

}
```
