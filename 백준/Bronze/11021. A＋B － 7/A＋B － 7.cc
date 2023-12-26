#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num,x,y;
char enter;

int main(){
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x, &y);
		scanf("%c", &enter);

		printf("Case #%d: %d\n", i + 1, x + y);

	}
	return 0;
}