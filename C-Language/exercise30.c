#include <stdio.h>
int main()
{
char grade;
printf("\nΕισαγωγή βαθμού (A,B,C,D,F): ");
scanf("%c", &grade);
switch ( grade ) {
case 'A' :
case 'a' :
printf("\n\n %c αντιστοιχεί σε 4\n\n", grade);
break;
case 'B' :
case 'b' :
printf("\n\n %c αντιστοιχεί σε 3\n\n", grade);
break;
case 'C' :
case 'c' :
printf("\n\n %c αντιστοιχεί σε 2\n\n", grade);
break;
case 'D' :
case 'd' :
printf("\n\n %c αντιστοιχεί σε 1\n\n", grade);
break;
case 'F' :
case 'f' :
printf("\n\n %c αντιστοιχεί σε 0\n\n", grade);
break;
default :
printf("\n\n ΜΗ αποδεκτός βαθμός! \n\n");
}
return 0;
}
