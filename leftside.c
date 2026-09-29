/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : rightside.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-09-29
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/
#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++)
    {  
        for (int s = 0; s < 5-i; s++)
        {
            printf("  ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}