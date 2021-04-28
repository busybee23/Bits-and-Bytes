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

## Method 2 ( DP ) :

```
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

int fibo(long long int n, int*dp){
    if(n==0 || n==1){
        dp[n]=n;
        return n;
    }
    
    if(dp[n]!=-1)
        return dp[n];
        
    return dp[n] = (fibo(n-1,dp) + fibo(n-2,dp))%1000000007;
}


class Solution {
  public:
    long long int nthFibonacci(long long int n){
    int* dp = new int[n+1];
    for(int i =0;i<=n;i++){
        dp[i]=-1;
    }
    return fibo(n,dp);// code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
```
