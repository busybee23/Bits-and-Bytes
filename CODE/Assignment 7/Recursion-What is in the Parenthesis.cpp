#include <bits/stdc++.h>
using namespace std;

// Function to print strings present
// between any pair of delimeters
void printSubsInDelimeters(string str)
{
	// Stores the indices of
	stack<int> dels;
	for (int i = 0; i < str.size(); i++) {
		// If opening delimeter
		// is encountered
		if (str[i] == '(') {
			dels.push(i);
		}

		// If closing delimeter
		// is encountered
		else if (str[i] == ')' && !dels.empty()) {

			// Extract the position
			// of opening delimeter
			int pos = dels.top();

			dels.pop();

			// Length of substring
			int len = i - 1 - pos;

			// Extract the substring
			string ans = str.substr(
				pos + 1, len);

			cout << ans << endl;
		}
	}
}

// Driver Code
int main()
{

	string s; cin>>s;

	printSubsInDelimeters(s);

	return 0;
}
