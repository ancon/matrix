#include <stdio.h>
#include <stdlib.h>
void multi1(double *A, double *B, double *AB, int n, int m)//返回当前解带入A矩阵后的值
  {
    int i,j,k;
    for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
             for(k=0;k<n;k++)
             {
                 AB[i][j]=AB[i][j]+A[i][k]*B[k][j];
             }
         }
     }
  }
void multi2(double *A doubl *A2, int n, int m) //(m*n)*(n*m)矩阵转置乘矩阵
{
    int i,j,k;
    for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
             for(k=0;k<n;k++)
             {
                 A2[i][j]=A2[i][j]+A[k][j]*A[k][j];
             }
         }
     }
}


int main()//需提前定义一个nm数组来存储当前解带入A矩阵后的值
//初始化 A B R
    {
    double *p;
    int i,j,k;
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            R[i][j]=AX[i][j]-B[i][j]; //初始残差
    }
    p=

    while(1)
    {
        if//满足迭代结束条件
            break
        else
        multi1(*R,*R,*Rsqu,n,n);//残差的平方
    }


    return 0;
}
