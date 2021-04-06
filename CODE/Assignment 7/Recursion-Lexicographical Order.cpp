#include<iostream>
using namespace std;
int LastDigit(int n){
	n = n%10;
    return n;
}
void f(int n,int k){
	if(k > n){
		return ;
	}
	cout<<k<<" ";
	f(n,10*k);
	int r = LastDigit(k);
	int p = LastDigit(k + 1);
	if(r <= p){
        f(n,k+1);
	}
}
int main() {
	int n;
	cin >> n;
	cout<<0<<" ";
	f(n,1);
	return 0;
}
