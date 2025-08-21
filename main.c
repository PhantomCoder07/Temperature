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
    printf("The Temperature in Farenheit: %.2f\n",convert(cel));
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
    printf("The Temperature in Celsius: %.2f\n",convert(fah));
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
    printf("The Temperature in Kelvin: %.2f\n",convert(cel));
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
    printf("The Temperature in Celsius: %.2f\n",convert(kel));
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
    printf("The Temperature in Kelvin: %.2f\n",convert(fah));
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
    printf("The Temperature in Fahrenheit: %.2f\n",convert(kel));
    return 0;
}
// Celsius to Rankine
#include <stdio.h>
float convert (float c)
{
    return ((c*9)/5)+491.67;
}
int main()
{
    float cel;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cel);
    printf("The Temperature in Rankine: %.2f\n",convert(cel));
    return 0;
}
// Rankine to Celsius
#include <stdio.h>
float convert (float r)
{
    return ((r-491.67)*5)/9;
}
int main()
{
    float ran;
    printf("Enter temperature in Rankine: ");
    scanf("%f",&ran);
    printf("The Temperature in Celsius: %.2f\n",convert(ran));
    return 0;
}
// Fahrenheit to Rankine
#include <stdio.h>
float convert (float f)
{
    return f+459.67;
}
int main()
{
    float fah;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fah);
    printf("The Temperature in Rankine: %.2f\n",convert(fah));
    return 0;
}
// Rankine to Fahrenheit
#include <stdio.h>
float convert (float r)
{
    return r-459.67;
}
int main()
{
    float ran;
    printf("Enter temperature in Rankine: ");
    scanf("%f",&ran);
    printf("The Temperature in Fahrenheit: %.2f\n",convert(ran));
    return 0;
}
// Kelvin to Rankine
#include <stdio.h>
float convert (float k)
{
    return (k*9)/5;
}
int main()
{
    float kel;
    printf("Enter temperature in Kelvin: ");
    scanf("%f",&kel);
    printf("The Temperature in Rankine: %.2f\n",convert(kel));
    return 0;
}
// Rankine to Kelvin
#include <stdio.h>
float convert (float r)
{
    return (r*5)/9;
}
int main()
{
    float ran;
    printf("Enter temperature in Rankine: ");
    scanf("%f",&ran);
    printf("The Temperature in Kelvin: %.2f\n",convert(ran));
    return 0;
}
