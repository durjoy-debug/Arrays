/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : identity-converter.c
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

    int matrix[row][col];

    if (row != col)
    {
        printf(" its not a square matrix, means cant be identity\n");
        return 1;
    }
    
    

    printf("enter the elements of the matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix[i][j]); 
        }
        
    } 

    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col ; j++)
      {
        if (i==j && matrix[i][j] != 1)
        {
            matrix[i][j] = 1;
        }
        else if (i !=j && matrix [i][j] != 0)
        {
            matrix [i][j] = 0;
        }
        
       }
        
    }

      printf("Updated identity matrix: \n");
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
      }
      
 
    
    

    return 0;
}