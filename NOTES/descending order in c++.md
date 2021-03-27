To print descending order sequence in c++ 
Video : https://youtu.be/T7j-vEQ1RmQ
```
#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" " ;
    print(n-1);
}

int main()
{
    int n;
    cin>>n;

    print(n);
    cout<<endl;
    return 0;
}
```