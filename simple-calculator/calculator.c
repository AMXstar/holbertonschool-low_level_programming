#include <stdio.h>

int main(void)
{
    int choice;
    int a;
    int b;
    int result;

    printf("Welcome to Simple Calculator!\n");

    do
    {
        printf("\nSimple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");
        fflush(stdout);

        if (scanf("%d", &choice) != 1)
        {
            return 1;
        }

        if (choice == 0)
        {
            printf("Bye!\n");
        }
        else if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
        }
        else if (choice == 1)
        {
            printf("A: ");
            fflush(stdout);

            if (scanf("%d", &a) != 1)
            {
                return 1;
            }

            printf("B: ");
            fflush(stdout);

            if (scanf("%d", &b) != 1)
            {
                return 1;
            }

            result = a + b;

            printf("Result: %d\n", result);
        }

    } while (choice != 0);

    return 0;
}
