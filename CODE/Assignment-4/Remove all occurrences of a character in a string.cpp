#include <bits/stdc++.h> 
using namespace std; 

string removeCharRecursive(string str, char X) { 
	if (str.length() == 0) return ""; 		
	if (str[0] == X) return removeCharRecursive(str.substr(1), X); 	
	return str[0] + removeCharRecursive(str.substr(1), X); 
} 
int main() 
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str; cin>>str;
	char X; cin>>X;
 
	str = removeCharRecursive(str, X); 
	cout << str; 
	return 0; 
}
