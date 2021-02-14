
## Read as input 5 Numbers and print the largest out of them

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,a,b;
    priority_queue<int> pq;
    cin >> x >> y >> z >> a >> b;
    pq.push(x);
	pq.push(y);
	pq.push(z);
	pq.push(a);
	pq.push(b);
    cout<<pq.top();
    return 0;
}
```
