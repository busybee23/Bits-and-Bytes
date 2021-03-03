#include <bits/stdc++.h>
using namespace std;
int main () {
	int size;
	cin >> size;
	int arr[size];
	int b[100000];
	int k = 0;
	for(int i=0;i<size;i++)cin >> arr[i];
	for (int i = 0; i < size; i++) 
    { 
        int j; 
        for (j = i+1; j < size; j++) 
        { 
            if (arr[i] < arr[j]) 
                break; 
        }     
        if (j == size){
			b[k] = arr[i];
			k++;
		}  
    }
	sort(b,b+k);
	for(int i=0;i<k;i++)cout<<b[i]<<" ";
	return 0;
}
