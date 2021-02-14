```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int dis = num - 1;
    for(int i=1;i<=num;i++){
        for(int k=1;k<=dis;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)cout<<"* ";
        dis--;
        cout<<endl;
    }
    return 0;
}
```
