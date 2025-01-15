#include <stdio.h>
void length_of_string( char *str)
{
int length;
for( length=0;*str !='\0';str++)
{
length++;
}
printf("length of the string is %d",length);
}
int main() {
char str[100];
int length;
printf("Enter a string: ");
scanf("%[^\n]%*c", str);
length_of_string(str);
return 0;
}
