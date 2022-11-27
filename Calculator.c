#include <stdio.h>

int main()
{
   char operator;
   float num1;
   float num2;
   float result;
   printf("\nEnter an operator: ");
   scanf("%c", &operator);
   printf("Enter a number: ");
   scanf("%f", &num1);
   printf("Enter a number: ");
   scanf("%f", &num2);
   switch (operator){
        case '+':
            result = num1 + num2;
            printf("\nresult: %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %.2f", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %.2f", result);
            break;
        default:
            printf("%c Not Valid Bro", operator);

}
       return 0;
}
