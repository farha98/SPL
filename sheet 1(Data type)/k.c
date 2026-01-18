#include<stdio.h>
int main()
{
    int A,B,C, min,max;
    scanf("%d %d %d", &A,&B,&C);
    max = min = A;
    if(B>max)
    {
        max=B;
 
}
if (C>max)
 
    {
        max=C;
    }
    if(B<min)
    {
        min=B;
    }
    if(C<min)
    {
        min=C;
    }
 
  printf("%d %d", min,max);
}
