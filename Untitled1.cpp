#include <stdio.h>
void nhapmatran(int a[10][10], int m,int n);
void xuatmatran(int a[10][10], int m, int n);
int timmax(int a[10][10], int m, int n);
int timmin(int a[10][10], int m, int n);
int ktraSNT(int n);
int songuyento(int a[10][10], int m, int n);

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
	ktraSNT(n);
	songuyento(a,m,n);

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
	  	  	printf("%d   ;    ",a[i][j]);
	      }
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
    printf("\n Gia tri lon nhat la:a[%d][%d]",i,j);	
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

int ktraSNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	  {
	  	if(n%i==0);
	  	dem++;
	  }
    if(dem==1)
      return 1;
    else 
      return 0;
}

int songuyento(int a[10][10], int m, int n)
{
	int demnt=0;
	int tong=0;
	for(int i=1;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	  {
	  	  	if(ktraSNT(a[i][j]==1))
	  	  	demnt++;
	  	  	tong=tong+a[i][j];
			}
	  }
	if(demnt==0)
	  printf("\n Ma tran khong co so nguyen to");
	else
	  printf("\n Ma tran co %d so nguyen to, tong cac so nay la:%d",demnt,tong);
}


