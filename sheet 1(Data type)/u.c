#include <stdio.h>
 
int main() {
    double n;
    int int_part;
 
    scanf("%lf", &n);
    
    int_part = (int)n;
    
    if (n == int_part) {
      
        printf("int %d\n", int_part);
    } else {
        
        printf("float %d %.3f\n", int_part, n - int_part);
    }
    
    return 0;
}
