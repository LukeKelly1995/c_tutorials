#include <stdio.h>

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahrenheit-Celsius table using a for loop */

int main()
{
    float fahr;

    printf("Fahrenheit Celsius\n");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%10.0f %7.1f\n", fahr, (5.0/9.0) * (fahr-32.0));

}