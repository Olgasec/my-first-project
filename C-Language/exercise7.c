#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20000
int main()
{
time_t t1, t2;
int A[N], i, j, pos, temp;
srand(time(NULL));
for (i = 0; i < N; i++)
A[i] = rand() % 1000;
t1 = time(NULL);
for (i = 0; i < N - 1; i++)
{
pos = i;
for (j = i + 1; j < N; j++)
if (A[j] < A[pos])
pos = j;
temp = A[pos];
A[pos] = A[i];
A[i] = temp;
}
t2 = time(NULL);
for (i = 0; i < N; i++)
printf("%5d", A[i]);
printf("\n\nΧρόνος σε δευτερόλεπτα = %d\n", t2 - t1);
printf("\n\nΗμερομηνία: %s\n\n", ctime(&t2));
return 0;
}
