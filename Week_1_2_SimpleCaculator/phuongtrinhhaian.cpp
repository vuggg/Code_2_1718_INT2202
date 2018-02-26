#include <cstdio>

 
int i,j,n=2,m,k,dem=0;
double x,tam,a[10][11],b[10];
 
void nhap();
void xuat();
void giai();
 
//----------- NHAP HE PHUONG TRINH ----------------------------
void nhap(void)
{
 for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
        scanf("%lf",&a[i][j]);
        }
     scanf("%lf",&b[i]);
    }
}
 
//----------- XUAT HE PHUONG TRINH ------------------------------
void xuat(void)
{
 for(i=0;i<n;i++)
    {
     for(j=0;j<=n;j++)
        {
         if(j==n) printf("%5.2lf",b[i]);
         else printf("%5.2lf",a[i][j]);
        }
     printf("\n");
    }
}
 
//----------- GIAI HE PHUONG TRINH ---------------------------------
void giai(void)
{
//Tao ma tran lien ket--------
 for(i=0;i<n;i++)
     {
    a[i][n]=b[i];
   }
//Bat dau thuat toan Gauss-Jordan de giai he phuong trinh.------------
//Dung phep BDSC dua Aij ve ma tran cheo.
 for(j=0;j<n;j++)
    {
    for(i=n-1;i>=j;i--)
        {
        if(a[i][j]==0) continue;//Neu phan tu a bang 0 thi tang i.
        if((i>j)&&(a[i][j]!=0))
            {
            k=i-1;
            while((k>=j)&&(a[k][j]==0)) k--;//Xet cac phan tu a khac 0 tren cung cot j
            if(k<j)
                {
                //Doi cho dong thu i va j cho ca ma tran mo rong.
                for(m=0;m<=n;m++)
                    {
                    tam=a[i][m];
                    a[i][m]=a[j][m];
                    a[j][m]=tam;
                    }
                }
            if((k>=j)&&(k>=0))
                {
                x=-a[i][j]/a[k][j];
                //Nhan dong thu k cho x roi cong vao dong thu i.
                for(m=0;m<=n;m++)
                    a[i][m]+=a[k][m]*x;
                }
            }
        }
    }
 for(j=n-1;j>=0;j--)
    {
    for(i=0;i<=j;i++)
        {
        if(a[i][j]==0) continue;
        if((i<j)&&(a[i][j]!=0))
            {
            k=i+1;
            while((k<=j)&&(a[k][j]==0)) k++;
            if((k<=j)&&(k<=n))
                {
                x=-a[i][j]/a[k][j];
                //Nhan dong thu k voi x roi cong vao dong thu i.
                for(m=0;m<=n;m++)
                    a[i][m]+=a[k][m]*x;
                }
            }
        }
    }
//Ket thuc qua trinh Gauss.
 for(i=0;i<n;i++)
    if(a[i][i]==0)
        {
         printf("Vo so nghiem");
         dem++;
         return;
        }
 for(i=0;i<n;i++)
    {
     b[i]=a[i][n]/a[i][i];
    }
}
 
//----------------- MAIN ----------------------------------------------
int main()
{
 nhap();
 giai();
 if(dem==0)
    {
      printf("x = %.0lf, y = %.0lf",b[0],b[1]);
    }
}
