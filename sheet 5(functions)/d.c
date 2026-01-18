#include <stdio.h>
 
int mow(int n)
{
    int i;
     if(n <= 1)
        return 0;
 
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
     return 1;
}
 int main()
{
    int t;
    int n;
 
    scanf("%d", &t);
 
    while(t--)
    {
        scanf("%lld", &n);
 
        if(mow(n) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
