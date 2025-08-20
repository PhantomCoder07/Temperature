// Celsius to Fahrenheit 
#include <stdio.h>
float convert (float c)
{
    return ((9*c)/5)+32;
}
int main()
{
    float cel;
    printf ("Enter Temperature in Celsius: ");
    scanf ("%f",&cel);
    printf("The Temperature in Farenheit: %.2f",convert(cel));
    return 0;
}
// Fahrenheit to Celsius
#include <stdio.h>
float convert (float f)
{
    return ((f-32)*5)/9;
}
int main()
{
    float fah;
    printf ("Enter Temperature in Fahrenheit: ");
    scanf ("%f",&fah);
    printf("The Temperature in Celsius: %.2f",convert(fah));
    return 0;
}
// Celsius to Kelvin
#include <stdio.h>
float convert (float c)
{
    return c+273.15;
}
int main()
{
    float cel;
    printf ("Enter Temperature in Celsius: ");
    scanf ("%f",&cel);
    printf("The Temperature in Kelvin: %.2f",convert(cel));
    return 0;
}
// Kelvin to Celsius
#include <stdio.h>
float convert (float k)
{
    return k-273.15;
}
int main()
{
    float kel;
    printf ("Enter Temperature in Kelvin: ");
    scanf ("%f",&kel);
    printf("The Temperature in Celsius: %.2f",convert(kel));
    return 0;
}
// Fahrenheit to Kelvin
#include <stdio.h>
float convert (float f)
{
    return (((f-32)*5)/9)+273.15;
}
int main()
{
    float fah;
    printf ("Enter Temperature in Fahrenheit: ");
    scanf ("%f",&fah);
    printf("The Temperature in Kelvin: %.2f",convert(fah));
    return 0;
}
// Kelvin to Fahrenheit
#include <stdio.h>
float convert (float k)
{
    return (((k-273.15)*9)/5)+32;
}
int main()
{
    float kel;
    printf ("Enter Temperature in Kelvin: ");
    scanf ("%f",&kel);
    printf("The Temperature in Fahrenheit: %.2f",convert(kel));
    return 0;
}
