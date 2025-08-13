#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2*sizeof(int));
    
    answer[0] = (numer1 * denom2) + (numer2 * denom1);
    answer[1] = denom1 * denom2;
    
    int g = gcd(answer[0], answer[1]);
    answer[0] /= g;
    answer[1] /= g;
    
    return answer;
}