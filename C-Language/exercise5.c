#include <stdio.h>
#include <math.h>
#define Pi 3.14159
float sphere_volume(float);
int main()
{
float R, v;
printf("\nΕισαγωγή ακτίνας:");
scanf("%f", &R);
v = sphere_volume(R);
printf("\n\nΌγκος = %.2f\n\n", v);
return 0;
}
float sphere_volume(float r)
{
float vol;
vol = (4 * Pi * pow(r, 3)) / 3;
return vol;
}
