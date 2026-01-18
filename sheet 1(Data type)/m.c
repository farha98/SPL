#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x>='A'&& x<='Z') || (x>='a'&& x<='z'))
        {
        printf("ALPHA\n");
    if((x>='A'&& x<='Z'))
        {
        printf("IS CAPITAL");
        }
         else{
            printf("IS SMALL");
        }
        }
        else{
            printf("IS DIGIT");
        }
 
 
 
}
