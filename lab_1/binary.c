#include <stdio.h>
void printBinary(int no) {
if (no==0) return;
printBinary(no/2);
printf("%d",no%2);
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Binary representation: ");
printBinary(num);
printf("\n");
return 0;
}
