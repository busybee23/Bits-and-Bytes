#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = n,r = n,p=-1;
    while(m>=0){
       for(int i=0;i<=p;i++)cout<<" ";
       for(int i=r;i>=0;i--){
           cout<<i;
       }
       for(int i=1;i<=r;i++)cout<<i;
       r--;p++;m--;
       cout<<endl;
    }
    m = n-1,p = n-1,r=1;
    while(m>=0){
       for(int i=0;i<p;i++)cout<<" ";
       for(int i=r;i>=0;i--)cout<<i;
       for(int i=1;i<=r;i++)cout<<i;
       cout<<endl;m--;r++;p--;
    }
    
}
