/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : rightside.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-09-29
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/
#include <stdio.h>

int main()
{
    // for loop

    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < 5 - i; s++)
        {
            printf("  ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // while loop

    int i = 0;
    while (i < 5)
    {
        int s = 0;
        while (s < 5 - i)
        {
            printf("  ");
            s++;
        }
        int j = 0;
        while (j < i)
        {
            printf("* ");
            j++;
        }

        printf("\n");
        i++;
    }

    // with do while loop


  int k=0;
    do
    {
        int s = 0;
        do
        {
            printf("  ");
            s++;
        } while (s < 5 - k);

        int j = 0;
        do
        {
            printf("* ");
            j++;
        } while (j < k);

        printf("\n");
        k++;
    } while (k < 5);

    return 0;
}
