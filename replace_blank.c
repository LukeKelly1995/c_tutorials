#include <stdio.h>

/* replace multiple blank lines with a single blank */

int main()
{
    char c;
    char last_c;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || last_c != ' ')
        {
            putchar(c);
        }

    last_c = c;
    }
}
