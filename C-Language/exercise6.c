#include <stdio.h>
int mkd(int, int);
int main()
{
int a, b, m;
do
{
printf("\nΕισαγωγή των αριθμών a,b (a>=b) για εύρεση ΜΚΔ:");
scanf("%d%d", &a, &b);
} while (a < b);
m = mkd(a, b);
printf("\n\nO MΚΔ των %d και %d είναι ο %d\n\n", a, b, m);
return 0;
}
/* MKΔ */
int mkd(int x, int y)
{
if (y == 0)
return x;
else
return mkd(y, x % y);
}
