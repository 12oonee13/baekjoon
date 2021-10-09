#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main() {
	ios::sync_with_stdio(0);

	int a, b, c;

	cin >> a >> b >> c;

	string mul = to_string(a * b * c);

	for (auto n : mul) 
		freq[n-'0']++;
	
	for (int i = 0; i < sizeof(freq)/sizeof(int);i++) 
		//sizeof(freq)/sizeof(int) ´ë½Å mul.size()ÇØµµ µÅ
		cout << freq[i]<<"\n";
	

	return 0;
}