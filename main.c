#include <stdio.h>
#include <stdlib.h>
void multi1(double *A, double *B, double *AB, int n, int m)//���ص�ǰ�����A������ֵ
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
void multi2(double *A doubl *A2, int n, int m) //(m*n)*(n*m)����ת�ó˾���
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


int main()//����ǰ����һ��nm�������洢��ǰ�����A������ֵ
//��ʼ�� A B R
    {
    double *p;
    int i,j,k;
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            R[i][j]=AX[i][j]-B[i][j]; //��ʼ�в�
    }
    p=

    while(1)
    {
        if//���������������
            break
        else
        multi1(*R,*R,*Rsqu,n,n);//�в��ƽ��
    }


    return 0;
}
