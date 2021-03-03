#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
       string str;
	   cin >> str;
	   int n = str.size();
	   int maxlen = 0;
	    for (int i=0; i<n; i++) 
       { 
        
        for (int j =i+1; j<n; j += 2) 
        { 
            int length = j-i+1; 
            int leftsum = 0, rightsum =0; 
            for (int k =0; k<length/2; k++) 
            { 
                leftsum += (str[i+k]-'0'); 
                rightsum += (str[i+k+length/2]-'0'); 
            } 
            if (leftsum == rightsum && maxlen < length) 
                    maxlen = length; 
        } 
      } 
	  cout<<maxlen<<endl;
	}
}
