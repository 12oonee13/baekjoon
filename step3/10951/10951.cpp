#include<bits/stdc++.h>
using namespace std;

/*
����: https://st-lab.tistory.com/257?category=941682
EOF
 eof() �� �츮�� ���ϴ� �ùٸ� ������ true�� �Ƿ��� "�б� �õ��� �� ��"�� eof �˻縦 �ؾ��Ѵٴ� ��
 �׷��� ������ (cin >> a >> b).eof() ������� ��ȣ ���� cin >> a >> b�� ���� ���� �� eof���������� �˻��ϴ� ��
 cin.eof() X(���� Ʋ��)

 */

int main() {

	int a, b;
	while (!(cin >> a >> b).eof()) {	// Ȥ�� eof() ��� fail()�� ����ص� �ȴ�.
		cout << a + b << "\n";
	}
	return 0;
}