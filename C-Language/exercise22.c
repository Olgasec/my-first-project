#include <stdio.h>
#define N 5
#define M 3
int main()
{
int a[N], b[M], c[N+M];
int i;
for (i = 0; i < N; i++) {
printf("\nΕισαγωγή του %d στοιχείου του a: ", i + 1);
scanf("%d", &a[i]);
}
for (i = 0; i < M; i++) {
printf("\nΕισαγωγή του %d στοιχείου του b: ", i + 1);
scanf("%d", &b[i]);
}
for (i = 0; i < N; i++) 
c[i] = a[i];
for (i = N; i < N + M; i++)
c[i] = b[i-N];
printf("\n\n Μετά την ενοποίηση...\n\n");
for (i = 0; i < N + M; i++)
printf("%5d", c[i]);
printf("\n\n");
return 0;
}
