#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){

	int X, N;
	int sum=0;
	
	scanf("%d", &X);
	scanf("%d", &N);
	int* a = (int*)malloc(sizeof(int) * N);
	int* b = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	for (int i = 0; i < N; i++) {
		sum += a[i] * b[i];
	}

	if (sum == X)
		printf("Yes");
	else
		printf("No");

	return 0;
}