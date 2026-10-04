/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : inverted_pyramid.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-04
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    for (int i = 5; i > 0; i--)
    {
        for (int s = 0; s<5-i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
           printf("* ");
        }
        printf("\n");
        
    }
    

    // while loop
    int i=5;
    while (i > 0)
    {
        int s=0;
        while (s < 5 - i)
        {
            printf(" ");
            s++;
        }
        int j=0;
        while (j < i)
        {
            printf("* ");
            j++;
        }

        printf("\n");
        i--;
    }

    // do whileloop
    int k=5;
    do
    {
        int s=0;
        do
        {
            printf(" ");
            s++;
        } while (s<5-k);
         int j=0;
         do
         {
            printf("* ");
            j++;
         } while (j<k);


      printf("\n");
      k--;           
    } while (k>0);
    
    return 0;
}