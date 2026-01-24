#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, t, area;
printf("\nΠαρακαλώ δώστε 3 αριθμούς: ");
scanf("%f%f%f", &a, &b, &c);
if (a + b > c && a + c > b && b + c > a) {
t = (a + b + c) / 2;
area = sqrt(t * (t - a) * (t - b) * (t - c));
printf("\n\n Οι αριθμοί που δώσατε σχηματίζουν ένα τρίγωνο!");
printf("\n\n και το εμβαδόν του είναι %.2f\n\n", t);
}
else
printf("\n\n Οι αριθμοί που δώσατε ΔΕΝ σχηματίζουν ένα τρίγωνο!\n\n");
return 0;
}
