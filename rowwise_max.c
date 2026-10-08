/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : rowwise_max.c
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
    
    for (int i = 0; i < row; i++)
    {   
        max=array[i][0];
        for (int j = 0; j<col; j++)
        {
            if (max<array[i][j]) // arrow change korlei minimum ber kora jaibo
            {
              max=array[i][j];
            }
            
        }
        printf("maximum value at row %d is %d\n",i+1,max);
    }
    
    return 0;
}