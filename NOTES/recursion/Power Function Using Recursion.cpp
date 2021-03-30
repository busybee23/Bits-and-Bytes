#include<iostream>
using namespace std;

int power(int num, int x){
//     // base case 
//     if(x==0){
//         return 1;
//     }
//      // // recursive case 
//     // int SmallerProblem = power(num,x-1;)
//     // int BiggerProblem = num*(power(num,x-1))
    
//     return num*(power(num,x-1));
// }

// shortest way 
    if(x==0) return 1;

    return num*(power(num,x-1));
}

int main (){
    int num,x;cin>>num>>x;
    cout<<power(num,x)<<endl;
}

