// Menu driven program for calculator in C.

#include <stdio.h>

int main()
{
    double a, b;
    int choice = -1;

    printf(" Menu\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");

    while (1)
    {
        printf("\nEnter the operation you wish to perform : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter the first number : \n");
            scanf("%lf", &a);
            printf("Enter the second number : \n");
            scanf("%lf", &b);
            printf("%.2lf + %.2lf = %.2lf\n", a, b, (a + b));
        }
        else if (choice == 2)
        {
            printf("Enter the first number : \n");
            scanf("%lf", &a);
            printf("Enter the second number : \n");
            scanf("%lf", &b);
            printf("%.2lf - %.2lf = %.2lf\n", a, b, (a - b));
        }
        else if (choice == 3)
        {
            printf("Enter the first number : \n");
            scanf("%lf", &a);
            printf("Enter the second number : \n");
            scanf("%lf", &b);
            printf("%.2lf * %.2lf = %.2lf\n", a, b, (a * b));
        }
        else if (choice == 4)
        {
            printf("Enter the first number : \n");
            scanf("%lf", &a);
            printf("Enter the second number : \n");
            scanf("%lf", &b);
            printf("%.2lf / %.2lf = %.2lf\n", a, b, (a / b));
        }
        else if (choice == 5)
        {
            printf("BYE!!!");
            break;
        }
        else
        {
            printf("> Invalid user");
        }
    }

    return 0;
}