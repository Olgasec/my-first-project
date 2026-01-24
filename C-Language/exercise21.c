#include <stdio.h>
#define N 10
int main()
{
int a[N], i;
a[0]=1;
a[1]=1;
for (i=2; i<N; i++) {
a[i]=a[i-1]+a[i-2];
}
for (i=0; i<N; i++) {
printf("%d ", a[i]);
}
printf("\n\n");
return 0;
}
