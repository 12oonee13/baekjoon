#include<bits/stdc++.h>
using namespace std;

/*
설명: https://st-lab.tistory.com/257?category=941682
EOF
 eof() 가 우리가 원하는 올바른 시점에 true가 되려면 "읽기 시도를 한 후"에 eof 검사를 해야한다는 것
 그렇기 때문에 (cin >> a >> b).eof() 방식으로 괄호 안의 cin >> a >> b를 통해 읽은 후 eof상태인지를 검사하는 것
 cin.eof() X(많이 틀림)

 */

int main() {

	int a, b;
	while (!(cin >> a >> b).eof()) {	// 혹은 eof() 대신 fail()을 사용해도 된다.
		cout << a + b << "\n";
	}
	return 0;
}