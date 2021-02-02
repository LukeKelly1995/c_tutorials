#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* inside a word */

/* count lines, words and characters in input */

int main()
{
    char c; 
    int state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        
        if (c != ' ' && c != '\n' && c != '\t')
        {
            putchar(c);
            state = IN;
        }

        else if (state)
        {
            putchar('\n');
            state = OUT;
        }
           
    }

}