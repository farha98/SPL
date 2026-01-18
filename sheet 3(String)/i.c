#include<stdio.h>
#include <string.h>
int main(){
   char s[1003];
   scanf("%s",s);
   int n=strlen(s);
   int first = 0;
   int last = n-1;
   while(first<last){
    if(s[first]!= s[last]){
        printf("NO\n");
        return 0;
 
    }
    first++;
    last--;
   } printf("YES\n");
}
