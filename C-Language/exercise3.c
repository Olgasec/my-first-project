#include <stdio.h>
struct date {
int month;
int day;
int year;
};
int dif_days(struct date, struct date);
int main()
{
struct date a, b;
int dif;
printf("Δώσε την αρχική ημερομηνία (μήνας ημέρα έτος): ");
scanf("%d%d%d", &a.month, &a.day, &a.year);
printf("Δώσε την τελική ημερομηνία (μήνας ημέρα έτος): ");
scanf("%d%d%d", &b.month, &b.day, &b.year);
dif=dif_days(a, b);
printf("\nΗ διαφορά των δύο ημερομηνιών είναι: %d\n", dif);
return 0;
}
int dif_days(struct date x, struct date y)
{
int d, days, months, years;
if (y.day<x.day) {
y.day+=30;
y.month--;
}
if (y.month<x.month) {
y.month+=12;
y.year--;
}
days=y.day-x.day;
months=y.month-x.month;
years=y.year-x.year;
d=years*360 + months*30 + days;
return d;
}
