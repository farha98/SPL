#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
 
    if (N == 1) {
        printf("0");
        return 0;
    }
    if (N == 2) {
        printf("1");
        return 0;
    }
 
    long long array[N];
    array[0] = 0;
    array[1] = 1;
 
    for (int i = 2; i < N; i++) {
        array[i] = array[i-1] + array[i-2];
    }
 
    printf("%lld", array[N-1]);
    return 0;
}
