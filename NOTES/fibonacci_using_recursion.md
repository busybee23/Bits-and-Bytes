## How to find nth fibonacci number using recursion : 
Video : https://youtu.be/vrOPygrD3aM

## Method 1 ( using recursion ) :

```
#include<iostream>
using namespace std;

int fibo(int n){
	// base case 
	if(n==0 || n==1){
		return n; // f(0)=0 and f(1)=1
	}
<!-- 
	// recursive case 
	int first_digit = f(n-2);
	int second_digit = f(n-1);

	// final result 

	int final_result = first_digit + second_digit; -->

	return	fibo(n-1)+fibo(n-2);
}

int main(){
	int n;cin>>n;
	cout<<fibo(n)<<endl;
	return 0;
}
```