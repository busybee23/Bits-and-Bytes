```
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int rows, index = 1;
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
             index = 1;
            else
             index = index*(i-j+1)/j;

            cout << index << "   ";
        }
        cout << endl;
    }
}
```
