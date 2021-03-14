#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 0,j = 0;
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int k=0;k<n;k++){
        for(int r=0;r<m;r++){
            cin >> a[k][r];
        }
    }
    while(i < n){
        if(i%2 == 0){
			j = 0;
            while(j<m){
                cout<<a[i][j]<<", ";
                j++;
            }
            i++;
        }
        else{
            j = m - 1;
            while(j >= 0){
                cout<<a[i][j]<<", ";
                j--;
            }
            i++;
        }
    }
    cout<<"END";
    return 0;
}
