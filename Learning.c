//#include <stdio.h>
#include <stdio.h>
//int main()
int main()
//{
{
////////////%_\\\\\\\\\\\\
// int = whole number = %d
int x = 2;
int y = 1;
printf("%d", x + y); 
// double = decimal number = %lf
double z = 2;
double w = 2;
printf("\n%.2lf", z + w);
// char = letter = %c
char letter = 'L';
printf("\n%c", letter);
// char blank[0-1000] = word = %s
char word[100] = "Bruh";
printf("\n%s", word);
// float = decimal number (like double) = %f
float a = 2;
float b = 3;
printf("\n%.2f", a + b);
// how to use switch, case, and break;
char operator;
   float num1;
   float num2;
   float result;
   printf("\nEnter an operator(+): ");
   scanf("%c", &operator);
   printf("Enter a number: ");
   scanf("%f", &num1);
   printf("Enter a number: ");
   scanf("%f", &num2);
   switch (operator){
// case '+'; // makes a case that will add 2 numbers
case '+':
//  result = num1 + num2 // stores that the variable result will add num1 and num2 
result = num1 + num2; // only accepts + 
//  printf("%d result:", result); // prints the result of num1 + num2
printf("\nresult: %.2f", result);
//  break; //stops the switch
break;
} // end of the switch scope
//return 0; // tells computer it finished succesfully 
return 0;
// } // closes scope
} 
