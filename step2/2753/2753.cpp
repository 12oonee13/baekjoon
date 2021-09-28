#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;

	cin >> a;
	if (a%4==0 && a%100!=0 || a%400==0) cout << "1";
	else cout << "0";
	//cout << (year % 4 == 0 && (year % 100 > 0 || year % 400 == 0) ? 1 : 0);

	return 0;
}