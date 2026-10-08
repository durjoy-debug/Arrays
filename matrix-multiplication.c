/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : matrix-multiplication.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-08
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row1,col1,row2,col2;
    printf("enter the number of rows: ");
    scanf("%d",&row1);
    printf("enter the number of columns: ");
    scanf("%d",&col1);
    printf("enter the number of rows: ");
    scanf("%d",&row2);
    printf("enter the number of columns: ");
    scanf("%d",&col2);

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];
    
    if (col1!=row2)
    {
        printf("multiplication not possible ");
        return 1;
    }
    

    printf("enter the elements of 1st matrix: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
          scanf("%d",&matrix1[i][j]);
        }
        
    } 
    printf("enter the elements of 2nd matrix: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
          scanf("%d",&matrix2[i][j]);
        }
        
    } 

   for (int i = 0; i < row1; i++) //3rd e i increment hobe
   {
    for (int j = 0; j< col2; j++) //2nd e j increment hobe
    {
       result[i][j]=0;
       for (int k = 0; k < col1; k++) //1st e k increment hobe 
       {
          result[i][j] += matrix1[i][k] * matrix2 [k][j];
       }
               
    }
    
   }
   printf("matrix after multiplication: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
          printf("%d ",result[i][j]);
        }

        printf("\n");
    } 

    return 0;
}