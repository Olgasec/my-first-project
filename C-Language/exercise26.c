#include <stdio.h>
int main()
{
int number, divisor, sum=0;
printf("Επέλεξε έναν φυσικό αριθμό: ");
scanf("%d", &number);
for (divisor=1; divisor<=number/2; divisor++) {
if (number%divisor==0) {
sum+=divisor;
}
}
if (sum==number) {
printf("Ο αριθμός %d είναι ΤΕΛΕΙΟΣ.\n\n", number);
}
else {
printf("Ο αριθμός %d δεν είναι ΤΕΛΕΙΟΣ.\n\n", number);
}
return 0;
}
