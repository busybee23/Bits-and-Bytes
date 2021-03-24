## Problem Statment : 
Video : *to be added soon* <br>

Take as input N, a number. Print the pattern as given in the input and output section.

Sample Input<br>
```
7
```

Sample Output <br>
```
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567
```
## SOLUTION : 

```
#include<iostream>
using namespace std;
int main() {
	int N,rem;cin>>N;
	for(int i=1;i<=N;i++)
	{
		rem=N-i;
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		while(rem>0)
		{
			cout<<"*";
			rem--;
		}
		cout<<endl;
	}
	return 0;
}

```
Second way : 
```
#include <iostream>
using namespace std;
int main() {
  
  int i,j,n,s; 
   
cout<<"";

cin>>n;
s=n;

cout<<"";

for(i=1;i<=n;i++)
{
  
  s=s-i;
   
 for(j=1;j<=i;j++)
    {
        cout<<j;
    }  

      

 while(s>0)
        {
          
  cout<<"*";
      
      s--;
        }
cout<<endl;

s=n;

}

return 0;
}

```
