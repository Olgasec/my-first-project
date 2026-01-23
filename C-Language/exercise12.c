#include <stdio.h>
int main() {
int a, b, temp;
int *aa, *ab;
printf("Give number a:");
scanf("%d", &a);
printf("Give number b:");
scanf("%d", &b);
aa = &a;
ab = &b;
temp = *aa;
*aa = *ab;
*ab = temp;
printf("a=%d, b=%d\n", a, b);
return 0;
}
