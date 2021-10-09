#include <bits/stdc++.h>
using namespace std;

int main() {
	int array[9];
	int mn = -1;
	int index = 0;

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		if (max(mn, array[i]) != mn) {
			mn = array[i];
			index = i+1;
		}
	}
	cout << mn << "\n";
	cout << index;

	return 0;
}