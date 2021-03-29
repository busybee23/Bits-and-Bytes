## Problem Statement : Power function using recursion 

### Case 1 :

```
#include<iostream>
using namespace std;

int power(int num, int x){
    // base case 
    if(x==0){
        return 1;
}
    int smallercase = power(num,x-1)

    // recursive case
    int biggercase = num*smallercase;

    return biggercase;

int main(){
    int num,x;cin>>num>>x;
    cout<<power(num,x)<<endl;
    return 1;
}
```

Case 2 :

```
#include<iostream>
using namespace std;

int power(int num,int x){
    if(x==0) return 1;
    return num*(power(num, x-1));
}

int main(){
    int num,x;cin>>num>>x;
    cout<<power(num,x)<<endl;
    return 1;
}
```