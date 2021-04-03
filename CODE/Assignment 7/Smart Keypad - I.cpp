#include <iostream>
using namespace std;

char keys[][10] = {
	" ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz"
};

void PhoneKeypad(char *in, int i, char *out, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	int digit = in[i] - '0';
	for (int k = 0 ; keys[digit][k] != '\0' ; k++) {
		out[j] = keys[digit][k];
		PhoneKeypad(in, i + 1, out, j + 1);
	}
}

int main() {

	char inp[100], out[100];
	cin >> inp;

	PhoneKeypad(inp, 0, out, 0);


	return 0;
}
