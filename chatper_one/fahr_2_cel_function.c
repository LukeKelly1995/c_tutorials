#include <stdio.h>

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

float fahr_2_cel(float f);

/* print Fahrenheit-Celsius table using a for loop */

int main()
{
    float fahr;

    printf("Fahrenheit Celsius\n");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%10.0f %7.1f\n", fahr, fahr_2_cel(fahr));

}

/* fahr_2_cel: convert fahrenheit value to celsius */
float fahr_2_cel(float f)
{
    float c;

    c = (5.0/9.0) * (f-32.0);

    return c;
}