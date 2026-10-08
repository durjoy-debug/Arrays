/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : colwise_max.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-08
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row,col,max;
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

        printf("Array is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    
    for (int j = 0; j < col; j++)
    {    
        max=array[0][j];
        for (int i = 0; i<row; i++)
        {
            if (max<array[i][j]) // arrow change korlei minimum ber kora jaibo
            {
              max=array[i][j];
            }
            
        }
        printf("maximum value at col %d is %d\n",j+1,max);
    }

    return 0;
}