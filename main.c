#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("Inpur an integer :");
    scanf("%d", &x);
    
    if (x > 0)
       printf("양수입니다.|n"); 
    else if (x < 0)
         printf("음수입니다.|n");
    else
         printf("0입니다.|n"); 
  
  system("PAUSE");	
  return 0;
}
