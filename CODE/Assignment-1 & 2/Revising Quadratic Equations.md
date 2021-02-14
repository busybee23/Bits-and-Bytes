Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.<br>
If Real and Distinct , print the roots in increasing order.<br>
If Real and Equal , print the same repeating root twice.<br>
If Imaginary , no need to print the roots.<br>

## SOLUTION : 
```
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if(y*y < 4*x*z){
        cout<<"Imaginary";
    }
    else if( y*y == 4*x*z){
        cout<<"Real and Equal"<<endl;
        cout<<(-y + sqrt(pow(y,2) - 4*x*z))/2*x<<" "<<(-y - sqrt(pow(y,2) - 4*x*z))/2*x;
    }
    else{
        cout<<"Real and Distinct"<<endl;
        int cal = (-y + sqrt(pow(y,2) - 4*x*z))/2*x;
        int sal = (-y - sqrt(pow(y,2) - 4*x*z))/2*x;
        cout<<min(cal,sal)<<" "<<max(cal,sal);
    }
    return 0;
}
```
