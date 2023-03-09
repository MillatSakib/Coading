#include <stdio.h>

int main()
{
    int i, j, rows=3;
    int s, sp;
    s = 1;
    sp = rows - 1;
    for(i=1; i<rows*2; i++)
    {

        for(j=1; j<=sp; j++)
            printf(" ");

        for(j=1; j<s*2; j++)
            printf("*");
        printf("\n");

        if(i<rows)
        {
            sp--;
            s++;
        }
        else
        {
            sp++;
            s--;
        }
    }

    return 0;
}
