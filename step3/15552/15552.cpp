#include <bits/stdc++.h>
using namespace std;

//입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
/*
C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.
단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다
*/
/*
c++에서 실행 속도를 높이기 위해 
ios_base::sync_with_stdio(false); 
:ios_base::sync_with_stdio 구문은 c의 stdio와 cpp의 iostream을 동기화시켜주는 역할을 하는데, 이 때 iostream과 stdio의 버퍼를 모두 사용하기 때문에 딜레이가 발생
따라서, ios_base::sync_with_stdio(false); 코드를 작성해줌으로써 동기화를 비활성화
버퍼가 분리되었기 때문에 cin과 C의 scanf, gets, getchar 등을 같이 사용하면 안되고
cout과 C의 printf, puts, putchar 등을 같이 사용하면 엉뚱한 결과가 나올 확률이 높기 때문에 사용하면 안 됩니다.

cin.tie(null);
:cin과 cout의 묶음을 풀어줍니다.

기본적으로 cin과 cout은 묶여있고 묶여있는 스트림들은 한 스트림이 다른 스트림에서 각 IO 작업을 진행하기 전에 자동으로 버퍼를 비워줌을 보장


출처: https://jaimemin.tistory.com/1521 [꾸준함]
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