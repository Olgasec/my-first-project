#include <stdio.h>
#define N 5
int main()
{
int A[N][N];
int i, j;
int zcounter = 0, nozcounter = 0;
for (i = 0; i < N; i++)
for (j = 0; j < N; j++) {
printf("A[%d][%d]= ", i, j);
scanf("%d", &A[i][j]);
}
for (i = 0; i < N; i++) {
for (j = 0; j < N; j++)
printf("%d ", A[i][j]);
printf("\n");
}
for (i = 0; i < N; i++)
for (j = 0; j < N; j++) {
if (A[i][j] == 0)
zcounter++;
if (i == j && A[i][j] != 0)
nozcounter++;
}
printf("Μηδενικά στοιχεία πίνακα: %d\n", zcounter);
printf("Μη μηδενικά στοιχεία κύριας διαγωνίου: %d\n", nozcounter);
return 0;
}
