/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : multiple_add.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-08
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

     int row,col,n;
    printf("enter the number of matrixs: ");
    scanf("%d",&n);
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int matrix[row][col];
    int sum_matrix[row][col];

    printf("enter the elements of 1st matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&sum_matrix[i][j]); //1st matrix ke sum er base hishebe use korbo
        }
        
    } 
    for(int k=2; k<=n;k++)
    {   
      printf("enter the elements of %dth matrix: ",k);

      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix[i][j]);

          sum_matrix[i][j] += matrix[i][j]; //sign change kore dilei substitution hoye jabe...
        }
        
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