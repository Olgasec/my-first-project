#include <stdio.h>
int main()
{
int choice;
float feet, meter, cfeet, cmeter, pounds, newton;
printf("Επιλέξτε μετατροπή μεταξύ των: \n\n");
printf("1 Μήκος, \n");
printf("2 Όγκος, \n");
printf("3 Δύναμη, \n\n");
printf("Εισαγωγή της επιλογής σας: ");
scanf("%d",&choice);
switch (choice) {
case 1:
printf("\n\nΠόδια:");
scanf("%f",&feet);
meter=0.3048*feet;
printf("%.2f πόδια είναι %.4f μέτρα.\n", feet, meter);
break;
case 2:
printf("Κυβικά Πόδια:");
scanf("%f",&cfeet);
cmeter=0.00282*cfeet;
printf("%.2f κυβικά πόδια είναι %.4f κυβικά μέτρα.\n", cfeet, cmeter);
break;
case 3:
printf("Pounds:");
scanf("%f",&pounds);
newton=4.4482*pounds;
printf("%.2f pounds είναι %.4f newton.\n", pounds, newton);
break;
default:
printf("ΑΚΥΡΗ τιμή.\n");
}
return 0;
}
