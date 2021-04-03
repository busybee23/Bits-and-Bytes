#include <iostream>
using namespace std;

int cnt = 0;

bool isSafeToPlace(int board[][10], int i, int j, int n) {
	// check whether there is any queen in ith row and jth column or not
	for (int k = 0 ; k < n ; k++) {
		if (board[i][k] == 1 || board[k][j] == true) {
			return false;
		}
	}

	// for (int k = 0 ; k < n ; k++) {
	// 	if (board[k][j] == true) {
	// 		return false;
	// 	}
	// }
	// check right diagonal
	int l = i, m = j;
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j++;
	}

	i = l; j = m;
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j--;
	}

	return true;
}

int NQueen(int board[][10], int i, int n, int ans) {
	// base case
	if ( i == n) {
		cnt++;
		//ans++;
		for (int i = 0; i < n; i++) {
			for (int j = 0 ; j < n ; j++) {
				if (board[i][j] == 1) {
					cout << "{" << i + 1 << "-" << j + 1 << "} ";
				}
			}
			//cout << endl;
		}
		cout <<  " ";
		// return ans;
	}


	// recursive case
	for (int j = 0 ; j < n ; j++) {
		if (isSafeToPlace(board, i, j, n)) {
			board[i][j] = 1;
			// int kyaBakiSolveHua = NQueen(board, i + 1, n, ans);
			NQueen(board, i + 1, n, ans ++);
			board[i][j] = 0;
		}
	}

	return ans;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt" , "r" , stdin);
// 	freopen("output.txt" , "w" , stdout);
// 	freopen("error.txt" , "w" , stderr);
// #endif


	int board[10][10] = {0};
	int n;
	cin >> n; // n*n


	int ans = NQueen(board, 0, n, 0);
	cout << endl << cnt;

	return 0;
}
