#include <stdio.h>

int main() {
    int N, sum = 0, NN;
    printf("N = ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        NN = i * 10 + i;
        sum += NN;
    }
    
    printf("S = %d", sum);
    return 0;
}
