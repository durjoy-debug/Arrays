/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : matrix-addtion.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-08
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

   
    int row,col;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int matrix1[row][col];
    int matrix2[row][col];
    int sum_matrix[row][col];

    printf("enter the elements of 1st matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix1[i][j]);
        }
        
    } 
    printf("enter the elements of 2nd matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix2[i][j]);
        }
        
    } 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          sum_matrix[i][j]= matrix1[i][j]+matrix2[i][j]; // sign change kore dilei substitution hoye jabe
        }
        
    } 

    printf("matrix after addtion: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",sum_matrix[i][j]);
        }

        printf("\n");
    } 
  

    return 0;
}