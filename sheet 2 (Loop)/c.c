#include<stdio.h>
int main ()
{
    int n,x;
    int pos=0,neg=0,even =0,odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            scanf("%d",&x);
    if(x%2==0)
        even++;
        if(x>0)
        pos++;
        if(x<0)
        neg++;}{
 
      printf("Even: %d\n",even);
      printf("Odd: %d\n",n-even);
      printf("Positive: %d\n",pos);
      printf("Negative: %d\n",neg);
 
 
 
        }
}
