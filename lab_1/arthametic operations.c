#include <stdio.h>
float add(float x, float y) {
return x + y;
}
float subtract(float x, float y) {
return x - y;
}
float multiply(float x, float y) {
return x * y;
}
float divide(float x, float y) {
return x / y;
}
int main() {
int ch;
float number1, number2, result;
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter your choice: ");
scanf("%d", &ch);
printf("Enter two numbers: ");
scanf("%f%f", &number1, &number2);
switch (ch) {
case 1:
result = add(number1, number2);
printf("addition: %.2f\n", result);
break;
case 2:
result = subtract(number1, number2);
printf("subtraction: %.2f\n", result);
break;
case 3:
result = multiply(number1, number2);
printf("multiplication: %.2f\n", result);
break;
case 4:
if (number2 == 0) {
printf("Error: Division by zero is not allowed.\n");
} else {
result = divide(number1, number2);
printf("division: %.2f\n", result);
}
default:
printf("Invalid choice! Please try again.\n");
}
return 0;
}
