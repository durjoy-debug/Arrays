/*═══════════════════════════════════════════════════
██╗  ██╗  DURJOY DEV LOG
██║  ██║  File   : 2d_search_min_count.c
███████║  Author : Durjoy
██╔══██║  Stack  : C Programming
██║  ██║  Date   : 2026-10-08
╚═╝  ╚═╝
═══════════════════════════════════════════════════*/

#include <stdio.h>

int main() {

    int row,col,min,count=0,search,found=0;

    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int array[row][col];

    printf("enter the elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          scanf("%d",&array[i][j]);
          count+=1; //element count korar jonno
        }
        
    }

    printf("enter the number want to search: ");
    scanf("%d",&search);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          if (search==array[i][j])
          {
            found =1;
          }
          
        }
        
    }
    
    min=array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          if (min>array[i][j])
          {
            min=array[i][j];
          }
          
        }
        
    }

 

    printf("Array is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    printf("minimum value is: %d\n",min);

    if (found==1)
    {
        printf("%d is found \n",search);
    }
    else{
        printf("not found!!\n");
    }

    printf("number of element is = %d\n",count);

    return 0;
}