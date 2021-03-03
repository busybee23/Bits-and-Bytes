#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define pb push_back
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl
ll neverGonnaUseThis = MOD;

void solve() {

	string s; cin >> s;

	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
		while (s[i] == s[i + 1] && i != s.length())i++;
	}

}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int testCases = 1;
	//cin >> testCases;

	while (testCases--) {
		solve();
	}


	return 0;
}
