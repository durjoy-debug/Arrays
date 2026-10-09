/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : symmetric.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-09
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>


    int main() {

    int row,col;
    int sym=1;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);
     
    //sqr checking
    if (row !=col)
    {
        printf("has to be square matrixx\n");
        return 1 ;
    }
    

    int matrix1[row][col];
    int matrix2[row][col];

    printf("enter the elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&matrix1[i][j]);

          
        }
        
    }
    
    //transpose e convert korchi
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          matrix2[i][j]= matrix1[j][i];           
        }
        
    }

    //symmetric checkign
     for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                sym=0;
                break;
            }
            
        }
        
     }
     

    printf("Entered matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",matrix1[i][j]);         
        }
        printf("\n");

    }

    printf("Transposed matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",matrix2[i][j]);         
        }
        printf("\n");
    }
    
    if (sym==1)
    {
        printf("the matrix is symmetric\n");
    }
    else
       printf("the matrix is not symmetric\n");


    return 0;
}