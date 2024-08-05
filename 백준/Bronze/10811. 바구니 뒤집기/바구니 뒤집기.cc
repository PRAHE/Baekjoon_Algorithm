#include <iostream>
using namespace std;

int main() {
	int N, M;
	int i, j;

	cin >> N >> M;

	//N의 입력에 따른 배열 생성
	int* arr = new int[N];
	int* temp = new int[N]; //임시배열생성
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
		temp[i] = i + 1;
	}

	//M에 따른 i,j 입력 횟수
	for (int m = 0; m < M; m++) {
		cin >> i >> j;
		int tmp = j;
		for (int k = i - 1; k < j; k++) {
			arr[k] = temp[tmp - 1];
			tmp--;
		}
		for (int i = 0; i < N; i++) {
			temp[i] = arr[i];
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}