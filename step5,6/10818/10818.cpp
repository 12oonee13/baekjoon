#include <bits/stdc++.h>
using namespace std;
/*
�迭�� ����Ͽ� �ּ�, �ִ��� ã������ 
������ Ȱ���ϸ� ���� ����
sort(�����ּ�(����), ���ּ�(������)) - ������������ ��������
+min(a,b),
max(a,b)
*/
int main() {
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int array[N]; 
	/*���־󿡼��� ����ũ��迭 ��������������
	���� �� �ٸ� ���α׷������� �������� 
	�׷��� ���ؿ����� �������� ��
	*/

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);		// 0 ~ N-1 ���� ����

	cout << array[0] << " " << array[N - 1];

	return 0;
}