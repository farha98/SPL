#include<stdio.h>
void solve(int i)
{
    if(i>=1)
    {
    printf("I love Recursion\n");
    solve(i-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
