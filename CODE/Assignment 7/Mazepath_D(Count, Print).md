#include <bits/stdc++.h>
using namespace std;
int c = 0;
bool isPossible(int n,int m,int i,int j){
    if(i < 0 || j < 0 || i > n - 1 || j > m - 1){
        return false;
    }
    return true;
}
void f(int n,int m,int i,int j,string ans){
    if(i == n-1 && j == m-1){
        cout<<ans<<" ";
        c++;
        return ;
    }
    if(isPossible(n,m,i+1,j)){
        f(n,m,i+1,j,ans+'V');
    }
    if(isPossible(n,m,i,j+1)){
        f(n,m,i,j+1,ans+'H');
    }
    if(isPossible(n,m,i+1,j+1)){
        f(n,m,i+1,j+1,ans+'D');
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    f(n,m,0,0,"");
    cout<<endl;
    cout<<c;
    return 0;
}
