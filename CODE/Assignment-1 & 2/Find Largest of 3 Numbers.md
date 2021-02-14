## Input three numbers, print the largest of these numbers
Question Link : https://hack.codingblocks.com/app/contests/2107/15/problem<br>

SOLUTION : 
```
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a > b && a > c)cout<<a<<endl;
    else if(b > a && b > c)cout<<b<<endl;
    else if(c > a && c > b)cout<<c<<endl;
}

```
