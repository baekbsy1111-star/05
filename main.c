#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int sum=0;
    int i;
    
    printf("Input an integer :");
    scanf("%d", &x);
    
    for(i=1;i<=x;i++)
           sum = sum + i;
    
    printf("sum is %i|n", sum);
    
  system("PAUSE");	
  return 0;
}
