#include <stdio.h>
#include <string.h>
 
int main() {
    char S[1005], T[1005];
 
    scanf("%s", S);
    scanf("%s", T);
 
    printf("%d %d\n", strlen(S), strlen(T));
    printf("%s %s\n", S, T);
 
    return 0;
}
