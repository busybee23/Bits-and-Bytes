## How to find factorial of a number in C++ 
Video : https://youtu.be/emp5sLKs93U

### Method 1 (using for loop) :
```
#include <iostream>
using namespace std;
  
// function to find factorial of given number

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 
int main()
{
    int num;cin>>num;
    cout << "Factorial of "
         << num << " is "
         << factorial(num) << endl;
    return 0;
}
```
### Method 2 (using recursion) : 
```
#include<iostream>
using namespace std;

int fac(int n){
    // base case
    if(n==0){
        return 1;
    }
    //result where fac(n-1) was the recursive case
return n*fac(n-1);
}

int main (){
    int n;cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}
```
