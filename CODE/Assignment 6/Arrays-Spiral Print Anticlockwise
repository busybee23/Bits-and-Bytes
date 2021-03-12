#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int minr = 0;
    int minc = 0;
    int mxr = n - 1;
    int mxc = m - 1;
    while(minr <= mxr && minc <= mxc){
        for(int i=minr,j=minc;i<=mxr;i++){
            cout<<a[i][j]<<", ";
        }
        minc++;
        for(int i=minc,j=mxr;i<=mxc;i++){
            cout<<a[j][i]<<", ";
        }
        mxr--;
        for(int i=mxr,j=mxc;i>=minr;i--){
            cout<<a[i][j]<<", ";
        }
        mxc--;
        for(int i=mxc,j=minr;i>=minc;i--){
           cout<<a[j][i]<<", ";
        }
        minr++;
    } 
    cout<<"END";
}
