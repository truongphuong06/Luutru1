#include<stdio.h>
#include<stdlib.h>
void nhapmatran(int a[10][10], int m, int n);
void xuatmatran(int a[10][10], int m, int n);
int timmax(int a[10][10], int m, int n);
int timmin(int a[10][10], int m, int n);
int tongphantu(int a[10][10], int m, int n);
void timx(int a[10][10],int m, int n);

int main()
{
	int a[10][10],m,n;
	do
	  {
	  	printf("\n Nhap m va n:");
	  	scanf	("%d%d",&m,&n);
	  }while(m<=0||n<=0);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	timmax(a,m,n);
    timmin(a,m,n);
	tongphantu(a,m,n);
timx(a,m,n);
	
}
	void nhapmatran(int a[10][10], int m, int n)
{
	
	for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	  {
	  	  	printf("a[%d][%d]:",i,j);
	  	  	scanf("%d",&a[i][j]);
		  }
	  }
}

void xuatmatran(int a[10][10], int m, int n)
{
	for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	  {
	  	  	printf("  %d  ",a[i][j]);
	      }
	    printf("\n");
      }
}
int timmax(int a[10][10], int m, int n)
{
	int i,j;
	int max=a[0][0];
	for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	  {
	  	    if(max<a[i][j])
	  	      max=a[i][j];
	      }
      }
    printf("\n Gia tri lon nhat la:a[%x][%x]",i,j);	
return max;
}

int timmin(int a[10][10], int m, int n)
{
	int i,j;
	int min=a[0][0];
	for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	  {
	  	    if(min>a[i][j])
	  	      min=a[i][j];
	      }
      }
    printf("\n Gia tri nho nhat la:a[%d][%d]",i,j);	
return min;
}
int tongphantu(int a[10][10], int m, int n)
{
	int tong=0,i,j;
	for (i=0;i<m;i++)
	   {
	   	for(j=0;j<n;j++)
	   	  {
	   	  	tong+=a[i][j];
	   	  	
	   	  }
	   }
	printf("\ntong cac phan tu trong mang la: %d",tong);
	return 0;
}	
void timx(int a[10][10],int m, int n)
{
    int x,i,j;
    printf("\nNhap gia tri x can tim:\n");
    scanf("%d", &x);
    printf("\nVi tri cua x trong mang la:\n"); 
    for (i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
          if(a[i][j]==x)
            {
             printf(" %d %d \t",i,j);
            }
        }
    }
}
void sapxep (int b[10], int n, int m)
{
    for (int i = m*n ; i > 0 ; i--)
    {
        for (int j = 0 ; j < i ; j++)
            if (b[j] < b[j + 1])
            {
                int tmp;
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
    }
}
     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




