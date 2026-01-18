#include <stdio.h>
int printNumbers(int N)
{
    for(int i = 1; i <= N; i++) {
        printf("%d", i);
        if(i != N) {
            printf(" ");
        }
    }
    printf("\n");
    return N;
}
int main() {
    int N;
    scanf("%d", &N);
    int result=printNumbers(N);
    return 0;
}
