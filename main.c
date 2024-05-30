//Develop a console-based C program that performs basic arithmetic operations like addition, subtraction, multiplication,
//and division.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n='y';
    while(n!='n' && n!='N')
    {
        int a,b;
        printf("Enter the first number : ");
        scanf("%d",&a);

        while (getchar()!='\n');
        char c;
        printf("Enter operator (+, -, *, /): ");
        scanf("%c",&c);

        printf("Enter the second number : ");
        scanf("%d",&b);

        switch(c)
        {
            case '+': printf("%d + %d = %d",a,b,(a+b));
                      break;

            case '-': printf("%d - %d = %d",a,b,(a-b));
                      break;
            case '*': printf("%d * %d = %d",a,b,(a*b));
                      break;
            case '/': if (b != 0)
                        {
                            float c=(float)a/b;
                            printf("%d / %d = %.2f",a,b,c);
                        }
                        else
                        {
                            printf("Error: Division by zero is not allowed.");
                        }
                      break;
            default:
                printf("Error: Invalid operator");
        }
        printf("\n\nEnter 'n' to exit or any other key to continue..\n");
        scanf(" %c",&n);
        while (getchar()!='\n');
        printf("\n");
    }
    return 0;
}
