#include <stdio.h>
#define N 3
int main()
{
int A[N][N], T[N][N];
int i, j;
for (i=0; i<N; i++)
for (j=0; j<N; j++) {
printf("A[%d][%d]= ", i, j);
scanf("%d", &A[i][j]);
}
for (i=0; i<N; i++)
for (j=0; j<N; j++)
T[i][j]=A[j][i];
for (i=0; i<N; i++) {
for (j=0; j<N; j++)
printf("%d\t", T[i][j]);
printf("\n");
}
return 0;
}
