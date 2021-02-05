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
