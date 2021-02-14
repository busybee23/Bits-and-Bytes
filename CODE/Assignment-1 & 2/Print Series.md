## Take the following as input.
https://hack.codingblocks.com/app/contests/2107/201/problem<br>

A number (N1)<br>
A number (N2)<br>
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

SOLUTION : 
```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin >> x >> y;
    int c = 0,i=1;
    while(c!=x){
       if((3*i + 2)% y != 0){
           cout<<3*i + 2 << endl;
           c++;
       }
       i++;
    }
    return 0;
}
```
