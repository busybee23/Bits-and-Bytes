#include<iostream>
using namespace std;
bool f(int *a,int n,int sum,int i,int count){
    if(i == n){
		if(sum == 0 && count > 0){
			return true;
		}
		else return false;
	}
	return f(a,n,sum + a[i],i+1,count+1) || f(a,n,sum,i+1,count);
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)cin >> a[i];
		if(f(a,n,0,0,0))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
