#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C;
	char ch;

	scanf("%d %d", &A, &B);
	scanf("%c", &ch);
	scanf("%d", &C);

	if (B + C > 59) {
		if (A >= 0 && A < 23) {
			if(A + ((B + C) / 60)>=24)
				printf("%d %d\n", A + ((B + C) / 60)-24, (B + C) % 60);
			else
				printf("%d %d\n", A + ((B + C) / 60), (B + C) % 60);
		}else if(A==23)
			printf("%d %d\n", -1 + ((B + C) / 60), (B + C) % 60);
	}else 
		printf("%d %d\n", A, B+C);

	return 0;
}