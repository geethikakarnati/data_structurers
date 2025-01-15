#include <stdio.h>
int gcd_fun(int x,int y) {
if (y==0) {
return x;
}
return gcd_fun(y, x % y);
}
int main() {
int number1,number2,result;
printf("Enter two numbers: ");
scanf("%d %d", &number1, &number2);
result = gcd_fun(number1, number2);
printf("GCD of %d and %d is %d\n", number1, number2, result);
return 0;
}
