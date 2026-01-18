#include<stdio.h>
int main()
{
    int n,i,input;
    scanf("%d",&n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        sum=sum+input;
    }
    printf("%lld",sum>=0? sum:-sum);
}
