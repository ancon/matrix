#include <stdio.h>
#include <stdlib.h>
void multi1(double A[n][e], double X[e][m], double AB[n][m], int n, int e, int m)//���ص�ǰ�����A������ֵ
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
void multi2(double A[n][m] doubl A2[m][m], int n, int m) //(m*n)*(n*m)����ת�ó˾���
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

int main()//����ǰ����һ��nm�������洢��ǰ�����A������ֵ
//��ʼ�� A B R
    {
    double R[][], P[][];
    int i,j,k;
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            R[i][j]=AX[i][j]-B[i][j];//��ʼ�в�
            P[i][j]=R[i][j];
    }


    while(1)
    {
        if//�����������������
            break
        else
        multi2(R,Rsqu,n,m);//�в��ƽ�� mm
        multi1(A,P,AP,n,n,m);//���Ap
        multi1(PT,AP,PAP,m,n,m);
        inverse(PAP,PAP1);//mm
        multi1(PAP1,Rsqu,alpha,m,m,m);//����alpha

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                for(k=0;k<m;k++)
                {
                    q=q+P[i][k]*alpha[k][j];
                }
                X[i][j]=X[i][j]+q;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                for(k=0;k<m;k++)
                {
                    q=q+P[i][k]*alpha[k][j];
                }
                X[i][j]=X[i][j]+q;
            }
        }

        //����alpha
    }
    // ��ӡ���2

    return 0;
}
