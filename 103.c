//program to perform matrix multipilcation of 2  array (3*3)size
#include<stdio.h>
void multiplymatrix(int firstmatrix[3][3],int secmatrix[3][3],int res[3][3])
{
    int i,j,k;
    for(int i=0;i<3;i++)
{
   for(int j=0;j<3;j++)
{
    res[i][j]=0;
    for(int k=0;k<3;k++)
    {
        res[i][j]+=firstmatrix[i][k]*secmatrix[k][j];
    }
   }
}
}
 void printmatrix(int matrix[3][3])
 {
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("%d\t",matrix[i][j]);
         }
         printf("\n");
     }
 }

   int main()
{
 int firstmatrix[3][3]={
 {1,2,3},
 {4,5,6,},
 {7,8,9}
 };
 int secmatrix[3][3]={
{9,8,7},
{6,5,4},
{3,2,1},
};
  int res[3][3];

   multiplymatrix(firstmatrix,secmatrix,res);

   printf("resultant matrix:\n");
   printmatrix(res);

return 0;
}

