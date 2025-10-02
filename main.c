#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("Inpur an integer :");
    scanf("%d", &x);
    
    if (x > 0)
       printf("absol is %i.|n", x); 
    else
         printf("absol is %i.|n", -x); 
  
  system("PAUSE");	
  return 0;
}
