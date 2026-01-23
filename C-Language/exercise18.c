#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
char str[MAX_SIZE];
char toFind;
int count = 0, i = 0;
printf("Enter any string: ");
gets(str);
printf("Enter character to be searched: ");
toFind = getchar();
while (str[i] != '\0')
{
if (str[i] == toFind)
count++;
i++;
}
if (count == 0)
printf("'%c' not found.", toFind);
else
printf("'%c' is found %d times.", toFind, count);
return 0;
}
