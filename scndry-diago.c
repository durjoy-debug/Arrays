/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : scndry-diago.c
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
        if (j==(col-1)-i)  //indexing jodi 1 theke kori tahole col-i dilei hobe.. 
        {
        

         char *suffix[]={"st","nd","rd","th"};

        printf("%d%s secondary diagonal element is: %d\n",i+1,suffix[i<3? i : 3],matrix[i][j]); 

        }
        
      }
      
    }
    


    return 0;
}