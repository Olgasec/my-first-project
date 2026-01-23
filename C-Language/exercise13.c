#include <stdio.h>
int main()
{
int num1, num2, result, op;
int *ptr1, *ptr2;
ptr1 = &num1;
ptr2 = &num2;
printf("Give two numbers:");
scanf("%d%d", ptr1, ptr2);
printf("Give 1 for Sum, 2 for Difference , 3 for Product, 4 for Quotient: ");
scanf("%d", &op);
switch (op)
{
case 1:
result = *ptr1 + *ptr2;
break;
case 2:
result = *ptr1 - *ptr2;
break;
case 3:
result = *ptr1 * *ptr2;
break;
case 4:
result = *ptr1 / *ptr2;
break;
default:
printf("Wrong operation.");
break;
}
printf("The result is: %d", result);
return 0;
}
