#include <stdio.h>
#include <math.h>
#define N 5
int main()
{
float V[N], sum=0, norm;
int i;
//Εισαγωγή πίνακα
for (i=0; i<N; i++) {
printf("V[%d]= ", i);
scanf("%f", &V[i]);
}
//Υπολογισμός αθροίσματος τετραγώνων και νόρμας
for (i=0; i<N; i++) {
sum+=pow(V[i], 2);
}
norm=sqrt(sum);
printf("Η νόρμα του πίνακα V είναι: %.3f\n\n", norm);
return 0;
}
