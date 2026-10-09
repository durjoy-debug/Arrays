/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : transpose.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-09
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row,col;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int array[row][col];

    printf("enter the elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&array[i][j]);
        }
        
    }
    
    printf("Transposed array is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",array[j][i]);
        }
        printf("\n");
    }

    
    

    return 0;
}