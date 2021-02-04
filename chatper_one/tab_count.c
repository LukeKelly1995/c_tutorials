#include <stdio.h>

/* count blanks, newlines, and tabs in input */

int main()
{
    int c, blank_count, newline_count, tab_count;

    blank_count = 0;
    newline_count = 0;
    tab_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blank_count;
        }

        else if (c == '\n')
        {
            ++newline_count;
        }

        else if (c == '\t')
        {
            ++tab_count;
        }
        
            
    }

    printf("Blank count: %d, Newline count: %d, Tab count: %d\n", blank_count, newline_count, tab_count);

}