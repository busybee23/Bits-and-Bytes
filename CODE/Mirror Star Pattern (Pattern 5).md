```
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
	cin >> rows;
	if(rows%2 != 0) rows++;
	rows /= 2;

    for(int i = 1; i <= rows; ++i) {
    	int k = 0;
        for(int j = 1; j <= rows-i; ++j)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    

    for(int i = rows-1; i >= 1; --i)
    {
        for(int j = 0; j < rows-i; ++j)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }
}
```
