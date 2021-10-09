#include <bits/stdc++.h>
using namespace std;
/*
배열을 사용하여 최소, 최댓값을 찾을때는 
정렬을 활용하면 가장 쉬움
sort(시작주소(포함), 끝주소(미포함)) - 오름차순으로 정렬해줌
+min(a,b),
max(a,b)
*/
int main() {
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int array[N]; 
	/*비주얼에서는 가변크기배열 지원하지않지만
	백준 등 다른 프로그램에서는 지원해줌 
	그래서 백준에서는 정답으로 돼
	*/

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);		// 0 ~ N-1 범위 정렬

	cout << array[0] << " " << array[N - 1];

	return 0;
}