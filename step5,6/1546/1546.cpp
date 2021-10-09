#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	double sum = -1 , mn = -1;

	cin >> N;
	
	double* arr = (double*)malloc(sizeof(double) * N);
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (mn < arr[i]) mn = arr[i];
	}

	for (int i = 0; i < N; i++) {
		arr[i] =  arr[i]/ mn * 100;
		sum += arr[i];
	}
	cout << sum / (double)N;

	return 0;
}