#include<stdio.h>
#include <string.h>
int main(){
   char d[100005];
  scanf("%s",d);
   int i=0;
 
   for(i=0;i<strlen(d);i++){
    if(d[i]==','){
        d[i]=' ';}
 
 
   else if  (d[i] >= 'a' && d[i] <= 'z'){
    d[i] = d[i]-32;
   }
 else if (d[i] >= 'A' && d[i] <= 'Z'){
    d[i] = d[i]+32;}
 
   }
   printf("%s\n",d);
}
