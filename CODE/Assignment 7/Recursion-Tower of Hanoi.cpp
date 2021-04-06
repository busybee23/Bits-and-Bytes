#include <iostream>
using namespace std;

int cnt = 0;

void toh(int n, string source, string helper, string destination) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	// 1. Move n-1 disks from source to helper
	toh(n - 1, source , destination , helper);
	// 2. Move nth disk manually from source to destination
	cout << "Move " << n << "th disc from " << source << " to " << destination << endl;
    cnt++;
	// 3. Move n-1 disks from helper to destination
	toh(n - 1, helper, source, destination);
}

int main() {
	int n;
	cin >> n;
    string a = "T2", b = "T3", c = "T1";

	toh(n, c,b,a);
    cout<<cnt;

	return 0;
}
