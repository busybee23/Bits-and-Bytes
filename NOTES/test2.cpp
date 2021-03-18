#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++)cin >> a[i];
		int money;
		cin >> money;
		int index = INT_MAX,k1,k2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
                if(a[i] + a[j] == money){
					if(index > abs(a[i] - a[j])){
						index = abs(a[i] - a[j]);
                        k1 = a[i];
						k2 = a[j];
					}
				}
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<min(k1,k2)<<" and "<<max(k1,k2)<<"."<<endl;
	}
	return 0;
}
