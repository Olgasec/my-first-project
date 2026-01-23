#include <stdio.h>
#define N 10
int main()
{
int i, temp;
int A[N];
int *left, *right;
left = A;
for (i = 0; i < N; i++)
{
*left++ = i + 1;
}
left = A;
right = A + N - 1;
while (left<=right)
{
temp = *left;
*left = *right;
*right = temp;
left++;
right--;
}
left = A;
right = A + N - 1;
while (left<=right)
{
printf("%d, ", *left);
left++;
}
return 0;
}
