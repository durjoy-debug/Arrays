/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : diagonal.c
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
        if (i==j)
        {
            /*
            if (i == 0)
                printf("%dst diagonal element is: %d\n", i+1, matrix[i][j]);
            else if (i == 1)
                printf("%dnd diagonal element is: %d\n", i+1, matrix[i][j]);
            else if (i == 2)
                printf("%drd diagonal element is: %d\n", i+1, matrix[i][j]);
            else
                printf("%dth diagonal element is: %d\n", i+1, matrix[i][j]);
                */ 
               //alternate : character pointer use kore kora jabe

         char *suffix[]={"st","nd","rd","th"};

            printf("%d%s diagonal element is: %d\n",i+1,suffix[i<3? i : 3],matrix[i][j]); //i less then 3 hole i number suffix use  korbe noyto 3number suffix.
        }
        
      }
      
    }
    

    return 0;
}