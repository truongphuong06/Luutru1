
#include<stdio.h>
#include<string.h>
void nha(int a[50][50],int n,int m);
void xuat(int a[50][50],int n,int m);
int giatrilonnhat(int a[50][50],int n,int m);
int main()
{
	int a[50][50],n,m;
	printf("\n nhap so dong mang n=");
	scanf("%d",&n);
	printf("\n nhap so cot la m=");
	scanf("%d",&m);
	nhapmang2c(a,3,4);
	xuatmang2c(a,3,4);
	giatrilonnhat(a,3,4);
}
//nhap mang 2 chieu
void nhap(int a[50][50],int n,int m)
{int i,j;
 for( i=0;i<n;i++)
 for(j=0;j<n;j++)
 {printf("\n nhap so phan tu cua mang 2c a[%d][%d]",i,j);
 scanf("%d",&a[i][j]);
 }
 
} 
// xuat mang 2c 
void xuat(int a[50][50],int n,int m)
{
	
		for(int i=0;i<n;i++)
		{for(int j=0;j<m;j++)
		printf("\n xuat so phan tu cua mang 2c vua nhap la ",&a);
		scanf("%d",&a);
		}
	
}
// gia tri lon nhat
int giatrilonnhat(int n,int m,int a[50][50])
{int max=0;
for (int i=0;0<n;i++)
for (int j=0;j<m;j++)
{if(a[i][j]>max)
{max=a[i][j];}
}
printf("\n gia tri cua max=%d",max);
}


