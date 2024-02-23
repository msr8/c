/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Multiply_Matrix(int Matrix1[2][3],int Matrix2[3][2],int Multiplied_Matrix[2][2],int row1,int col1,int row2,int col2);
int main()
{
    int sum = 0;
    int array1[2][3]={ {1,2,7},
                       {3,2,5}
                     };

    int array2[3][2] = {{4,6},
                        {8,5},
                        {9,1}
                       };
                       
    int Multiplied_Matrix[2][2];                   
    
    Multiply_Matrix(array1,array2,Multiplied_Matrix,2,3,3,2);
    
    for(int i = 0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d ",Multiplied_Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int Multiply_Matrix(int Matrix1[2][3],int Matrix2[3][2],int Multiplied_Matrix[2][2],int row1,int col1,int row2,int col2)
{
    int sum = 0;
    
    for(int i = 0 ;i<row1; i++)        //For iterating Rows of the new matrix
    {
        for(int j =0 ; j<col2;j++)     //For iterating Cols of the new Matrix
        {
            for(int k = 0;k<col1;k++)  //Accesing cols of the first matrix 
            {
            sum += Matrix1[i][k] * Matrix2[k][j];     
            }
            Multiplied_Matrix[i][j] = sum;
            sum = 0;
        }
    }
    return 0;
}

