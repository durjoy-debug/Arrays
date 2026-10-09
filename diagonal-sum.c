/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : diagonal-sum.c
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
    //element print korchi
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col ; j++)
      {
        if (i==j)
        {
            char *suffix[]={"st","nd","rd","th"};
            printf("%d%s diagonal element is: %d\n",i+1,suffix[i<3? i : 3], matrix[i][j]);
        }
        
      }
      
    }
    // sum print korchi
    int sum=0; 

    for (int i = 0; i < row; i++)
    {
        for (int j=0; j< col; j++)
        {
            if (i==j)
            {
                sum+= matrix[i][j];
            }
            
        }
        
    }
    printf("Sum of all diagonal element is: %d\n",sum);
    

    return 0;
}