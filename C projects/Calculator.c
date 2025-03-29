#include <stdio.h>
int main(){
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter number 1: ");
    scanf("%lf", &num1); 

    printf("Enter number 2: ");
    scanf("%lf", &num2); 

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %.2lf", result);
            break;
        case '/':
            if(num2 == 0){
                printf("Error! Division by zero is not possible\n");
                break;
            } else { 
                result = num1 / num2;
                printf("\nresult: %.2lf", result);
                break;
            }
            default:
            printf("Error! operator is not valid\n");
            break;
            
            
    }

    return 0;
}