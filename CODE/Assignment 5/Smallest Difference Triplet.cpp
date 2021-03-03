#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9 + 7

int maximum(int a, int b, int c) { 
   return max(max(a, b), c); 
} 
  
int minimum(int a, int b, int c) { 
   return min(min(a, b), c); 
} 


void smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n) { 

    sort(arr1, arr1+n); 
    sort(arr2, arr2+n); 
    sort(arr3, arr3+n); 
  
    int res_min, res_max, res_mid; 
  
    int i = 0, j = 0, k = 0; 
  
    int diff = INT_MAX; 
    while (i < n && j < n && k < n) 
    { 
        int sum = arr1[i] + arr2[j] + arr3[k]; 
  
        int max = maximum(arr1[i], arr2[j], arr3[k]); 
  
        int min = minimum(arr1[i], arr2[j], arr3[k]); 
        if (min == arr1[i]) 
            i++; 
        else if (min == arr2[j]) 
            j++; 
        else
            k++; 
  
        if (diff > (max-min)) 
        { 
            diff = max - min; 
            res_max = max; 
            res_mid = sum - (max + min); 
            res_min = min; 
        } 
    } 
  
    cout << res_max << " " << res_mid << " " << res_min; 
} 
void solve(){
	int n; cin>>n;
	int a[n],b[n],c[n];

	for(int i = 0; i<n; i++) cin>>a[i];
	for(int i = 0; i<n; i++) cin>>b[i];
	for(int i = 0; i<n; i++) cin>>c[i];

	smallestDifferenceTriplet(a,b,c,n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt" , "r" , stdin);
	// freopen("output.txt" , "w" , stdout);
	// #endif
	

	int t = 1;
	//cin>>t;
	
	while(t--){
		solve();
	}
	

	return 0;
}
