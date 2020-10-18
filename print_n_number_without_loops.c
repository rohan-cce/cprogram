
#include <stdio.h> 
  
int main() 
{   int n;
    scanf("%d",&n);
    static int i = 1; 
    if (i <= n) { 
        printf("%d ", i++); 
        main(); 
    } 
    return 0; 
} 
