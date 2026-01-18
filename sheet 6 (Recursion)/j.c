#include<stdio.h>
void check(int i,int n,long long sum)
{
    if(i<=n)
    {
        sum=sum*i;
        check(i+1,n,sum);
    }
    else
    {
        printf("%lld\n",sum);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    check(1,n,1);
}
