```
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void hollowRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
        for (j=1; j<=rows - i; j++) 
            cout << " "; 
               
        if (i==1 || i==rows) 
            for (j=1; j<=rows; j++) 
                cout << "*";  
        else
            for (j=1; j<=rows; j++) 
                if (j==1 || j==rows) 
                    cout << "*";   
                else
                    cout << " "; 
        
        cout <<endl; 
    } 
} 
  
// utility program to print all patterns 
void printPattern(int rows) 
{ 
    hollowRhombus(rows); 
} 
  
// driver program 
int main() 
{ 
    int rows;
	cin>>rows; 
    printPattern (rows); 
    return 0; 
} 
```
