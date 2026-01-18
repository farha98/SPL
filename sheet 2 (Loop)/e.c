#include<stdio.h>
int main ()
{
    int x,n,max=-999999;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>max)
            max=x;
 
    }
    printf("%d",max);
    }
 
