#include <stdio.h>
#include <stdio.h>

int main()
{
    char op;
    double first, second, result;
    int state = 1;

    do{
        printf("Enter an operator (+,-,*,/): ");
        scanf(" %c", &op);
        printf("\nEnter the first operand: ");
        scanf("%lf", &first);
        printf("Enter the second operand: ");
        scanf("%lf", &second);

        switch (op)
        {
        case '+':
            result = first + second;
            printf("\n%lf + %lf = %lf\n", first, second, result);
            break;
        case '-':
            result = first - second;
            printf("\n%lf - %lf = %lf\n", first, second, result);
            break;
        case '*':
            result = first * second;
            printf("\n%lf * %lf = %lf\n", first, second, result);
            break;
        case '/':
            result = first / second;
            printf("\n%lf / %lf = %lf\n", first, second, result);
            break;

        default:
            printf("\nError! operator is not correct\n");
        }
        printf("Would you like to continue?\nClick 1 for yes\nClick another number for exiting\n");
        scanf("%d", &state);
    }while(state==1);
    return 0;
}

