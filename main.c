#include <stdio.h>
#include <stdlib.h>
void multi1(double A[n][e], double X[e][m], double AB[n][m], int n, int e, int m)//返回当前解带入A矩阵后的值
  {
    int i,j,k;
    for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
             for(k=0;k<e;k++)
             {
                 AX[i][j]=AX[i][j]+A[i][k]*X[k][j];
             }
         }
     }
  }
void multi2(double A[n][m] doubl A2[m][m], int n, int m) //(m*n)*(n*m)矩阵转置乘矩阵
{
    int i,j,k;
    for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
             for(k=0;k<n;k++)
             {
                 A2[i][j]=A2[i][j]+A[k][i]*A[k][j];
             }
         }
     }
}
void inverse (double A[][], double Ainverse[][])

int main()//需提前定义一个nm数组来存储当前解带入A矩阵后的值
//初始化 A B R
    {
    double R[][], P[][];
    int i,j,k;
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            R[i][j]=AX[i][j]-B[i][j];//初始残差
            P[i][j]=R[i][j];
    }


    while(1)
    {
        if//不满足迭代结束条件
            break
        else
        multi2(R,Rsqu1,n,m);//残差Rk的平方 mm
        multi1(A,P,AP,n,n,m);//求得Ap
        multi1(PT,AP,PAP,m,n,m);
        inverse(PAP,PAP1);//mm
        multi1(PAP1,Rsqu1,alpha,m,m,m);//步长alpha

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                q=0；
                for(k=0;k<m;k++)
                {
                    q=q+P[i][k]*alpha[k][j];
                }
                X[i][j]=X[i][j]+q;
            }
        }//更新解X

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                q=0；
                for(k=0;k<m;k++)
                {
                    q=q+AP[i][k]*alpha[k][j];
                }
                R[i][j]=R[i][j]-q;
            }
        }//更新R
        //声明一个矩阵存beta
        inverse(Rsqu1,RsquInver);
        multi2(R,Rsqu2,n,m);//残差Rk+1的平方 mm
        multi1(RsquInver,Rsqu2,beta);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                q=0；
                for(k=0;k<m;k++)
                {
                    q=q+P[i][k]*beta[k][j];
                }
                P[i][j]=R[i][j]+q;
            }
        }//更新P

    }

    // 打印输出1

    return 0;
}
