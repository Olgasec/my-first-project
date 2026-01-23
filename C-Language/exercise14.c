#include <stdio.h>
#define N 10
int main()
{
int i;
int A[N];
int *ptr;
ptr = A;
printf("Give the array element:");
for (i = 0; i < 10; i++)
{
scanf("%d", ptr + i);
}
ptr = A;
for (i = 0; i < 10; i++)
{
printf("%d, ", *(ptr + i));
}
return 0;
}
