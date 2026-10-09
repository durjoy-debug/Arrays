/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : identity.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-09
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row,col;
    int check=1;
    
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
            check =0;
        }
        else if (i !=j && matrix [i][j] != 0)
        {
            check =0;
        }
        
       }
        
    }

      
    if (check==1)
    {
        printf(" It is a identity matrix\n");
    }
    else
       printf("It is not an identity matrix dump\n");
    
    

    return 0;
}