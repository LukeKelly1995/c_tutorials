#include <stdio.h>

/* copy input to output; 2nd version */

int main()
{
    int b;
    int c;

    printf("EOF: %d\n", EOF);

    b = getchar();
    printf("b: ");
    putchar(b);
    printf("\n");
    printf("b != EOF: %d\n", b != EOF);


    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}