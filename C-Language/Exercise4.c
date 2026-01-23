#include <stdio.h>
float convert_miles_km(float);
int main()
{
float miles, km;
printf("\nΕισαγωγή μιλίων προς μετατροπή σε χιλιόμετρα:");
scanf("%f", &miles);
km = convert_miles_km(miles);
printf("\n\nΧιλιόμετρα = %.2f\n\n", km);
return 0;
}
float convert_miles_km(float m)
{
float k;
k = m * 1.6093;
return k;
}
