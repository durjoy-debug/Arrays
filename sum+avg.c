/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : sum+avg.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-09
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row,col,sum,avg;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("enter the elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix[i][j]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {   
    
        for (int j = 0; j<col; j++)
        {
            sum += matrix[i][j];
            
        }
       
    }
    avg = sum /(row * col);

    printf("sum of all element is : %d\n",sum);
    printf("avarage is : %d\n",avg);

    return 0;
}