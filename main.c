#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    char op;
    int result;
    
    printf("Enter the calculation :");
    scanf("%d %c %d",&a, &op, &b);
    
    switch(op)
    {
              case '+':
                   result = a+b;
                   break;
              case '-':
                   result = a-b;
                   break;
              case '*':
                   result = a*b;
                   break;
              case '/': 
            if (b != 0) result = a / b;   
            else {
                printf("0���� ���� �� �����ϴ�!\n");
                return 1;
            }
            break;
        default:
            printf("�߸��� ������!\n");
            return 1;
    }

    printf("= %d\n", result);

    system("pause");
    return 0;
}
