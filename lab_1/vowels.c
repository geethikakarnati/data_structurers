#include <stdio.h>
#include <ctype.h>
#include<string.h>
void count(const char *str, int *vowel, int *conso){
*vowel = 0;
*conso = 0;
for (int i = 0; str[i] != '\0'; i++) {
char ch = tolower(str[i]);
if ((ch >= 'a' && ch <= 'z'))
{
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
(*vowel)++;
} else
{
(*conso)++;
}
}
}
}
int main() {
char str[100];
int vowel, conso;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
int len = strlen(str);
if (len > 0 && str[len - 1] == '\n') {
str[len - 1] = '\0';
}
count(str, &vowel, &conso);
printf("Number of vowels: %d\n", vowel);
printf("Number of consonants: %d\n", conso);
return 0;
}
