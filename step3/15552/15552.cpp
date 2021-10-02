#include <bits/stdc++.h>
using namespace std;

//����� ����� ������ ���� ���� �Է¹ްų� ����� �� �ð��ʰ��� �� �� �ִٴ� ���̴�.
/*
C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�, endl ��� ���๮��(\n)�� ����.
��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�
*/
/*
c++���� ���� �ӵ��� ���̱� ���� 
ios_base::sync_with_stdio(false); 
:ios_base::sync_with_stdio ������ c�� stdio�� cpp�� iostream�� ����ȭ�����ִ� ������ �ϴµ�, �� �� iostream�� stdio�� ���۸� ��� ����ϱ� ������ �����̰� �߻�
����, ios_base::sync_with_stdio(false); �ڵ带 �ۼ��������ν� ����ȭ�� ��Ȱ��ȭ
���۰� �и��Ǿ��� ������ cin�� C�� scanf, gets, getchar ���� ���� ����ϸ� �ȵǰ�
cout�� C�� printf, puts, putchar ���� ���� ����ϸ� ������ ����� ���� Ȯ���� ���� ������ ����ϸ� �� �˴ϴ�.

cin.tie(null);
:cin�� cout�� ������ Ǯ���ݴϴ�.

�⺻������ cin�� cout�� �����ְ� �����ִ� ��Ʈ������ �� ��Ʈ���� �ٸ� ��Ʈ������ �� IO �۾��� �����ϱ� ���� �ڵ����� ���۸� ������� ����


��ó: https://jaimemin.tistory.com/1521 [������]
*/
int main() {
	int T;
	int a, b;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}