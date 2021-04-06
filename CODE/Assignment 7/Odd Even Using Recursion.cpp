#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

void printOdd(int n) {
	if (n == 0) return;
	if (n % 2 != 0) cout << n << endl;
	printOdd(n - 1);
}

void printEven(int start, int end) {

	if (start % 2 == 0) cout << start << endl;
	if (start == end) return;
	printEven(start + 1, end);

}

void solve() {

	int n; cin >> n;
	printOdd(n);
	printEven(1, n);


}

int main() {

	int testCases = 1;
	//cin >> testCases;

	while (testCases--) {
		solve();
	}


	return 0;
}
