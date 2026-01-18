#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
 
    long long A[N];
    for(int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
 
    int i = 0, j = N - 1;
    while(i < j) {
        if(A[i] != A[j]) {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
 
    printf("YES");
    return 0;
}
