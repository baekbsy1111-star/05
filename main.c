#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int num;
    int trial=0;
    
    do
    {
        printf("Input a number:");
        scanf("%d", &num);
        trial++;
        
        if(answer < num)
            printf("high!|n");
        else if (answer > num)
             printf("low!|n");
             
             
}
while(num != answer);

printf("Congratulation! trial:%i|n", trial);


    system("pause");
    return 0;
}
