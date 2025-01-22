#include <iostream>
#include <string>
using namespace std;

// Merge 함수
void merge(int* num, string* name, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 임시 배열 생성
    int* leftNum = new int[n1];
    string* leftName = new string[n1];
    int* rightNum = new int[n2];
    string* rightName = new string[n2];

    // 데이터 복사
    for (int i = 0; i < n1; i++) {
        leftNum[i] = num[left + i];
        leftName[i] = name[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightNum[i] = num[mid + 1 + i];
        rightName[i] = name[mid + 1 + i];
    }

    // 병합
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftNum[i] <= rightNum[j]) {
            num[k] = leftNum[i];
            name[k] = leftName[i];
            i++;
        } else {
            num[k] = rightNum[j];
            name[k] = rightName[j];
            j++;
        }
        k++;
    }

    // 남은 요소 복사
    while (i < n1) {
        num[k] = leftNum[i];
        name[k] = leftName[i];
        i++;
        k++;
    }
    while (j < n2) {
        num[k] = rightNum[j];
        name[k] = rightName[j];
        j++;
        k++;
    }

    // 메모리 해제
    delete[] leftNum;
    delete[] leftName;
    delete[] rightNum;
    delete[] rightName;
}

// 분할 함수
void partition(int* num, string* name, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        partition(num, name, left, mid);
        partition(num, name, mid + 1, right);
        merge(num, name, left, mid, right);
    }
}

int main() {
    int N;
    cin >> N;

    // 동적 배열 생성
    int* num = new int[N];
    string* name = new string[N];

    // 입력
    for (int i = 0; i < N; i++) {
        cin >> num[i] >> name[i];
    }

    // 병합 정렬
    partition(num, name, 0, N - 1);

    // 출력
    for (int i = 0; i < N; i++) {
        cout << num[i] << " " << name[i] << "\n";
    }

    // 메모리 해제
    delete[] num;
    delete[] name;

    return 0;
}
