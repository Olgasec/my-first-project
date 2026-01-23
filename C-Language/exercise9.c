#include <stdio.h>
#define N 7 /* ημέρες */
#define M 12 /* δίωρα ανά ημέρα */
int main()
{
float T[N][M], ma, mi;
int i, j;
for (i = 0; i < N; i++)
for (j = 0; j < M; j++) {
printf("\nΘερμοκρασία της ημέρας %d, δίωρου %d: ", i + 1, j + 1);
scanf("%f", &T[i][j]);
}
/* Επικεφαλίδες */
printf("Ημέρα\tMax\tMin\n");
printf("--------------------------\n");
/* ημερήσια max - min */
for (i = 0; i < N; i++) {
ma = T[i][0];
mi = T[i][0];
for (j = 0; j < M; j++){ 
if (ma < T[i][j])
ma = T[i][j];
if (mi > T[i][j])
mi = T[i][j];
}
printf("%3d\t%.1f\t%.1f\n", i, ma, mi);
}
return 0;
}
