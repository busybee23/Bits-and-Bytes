```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int j = i;
        for(int k=0;k<i;k++)cout<<j<<" ";
        j++;
        for(int k=j;k<=n;k++)cout<<k<<" ";
        cout<<endl;
    }
    return 0;
}
```
