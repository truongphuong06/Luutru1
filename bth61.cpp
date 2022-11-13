#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien
{
	char Masv[10];
	char Hotensv[30];
	char Phai[10];
	int Namsinh;
	char Nganhhoc[30];
	float Kqcuoikhoa;
	char Xeploai[20];
	char Quequan[30];
};

typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[],int n);
void INGX(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &x);
void NhapsvN(SINHVIEN a[], int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[],int n);

int main()
{
	int n;
	SINHVIEN x, a[10];
	printf("\n\n\n Nhap so luong sinh vien:");
	scanf("%d",&n);
	NhapsvN(a,n);
	XuatsvN(a,n);
	printf("\n\n\n An phim bat ki de in danh sach sap xep");
	getch();
	Sapxep(a,n);
	XuatsvN(a,n);
	printf("\n\n\n An phim bat ki de in danh sach Gioi_Xuat_sac");
	getch();
	INGX(a,n);
	printf("\n\n\n\n An phim bat ki de tim SV");
	getch();
	TIMSV(a,n);
}

void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\n Nhap MA SV:");
	gets(x.Masv);
	
	//scanf("%d",&x.Masv);
	  fflush(stdin);
	printf("\n Nhap ho ten:");
	gets(x.Hotensv);
	  fflush(stdin);
	printf("\n Nhap phai:");
	gets(x.Phai);
	  fflush(stdin);
	printf("\n Nhap nganh hoc:");
	gets(x.Nganhhoc);
	  fflush(stdin);
	printf("\n Nhap Que quan:");
	gets(x.Quequan);


do
{
	printf("\n Nhap nam sinh:");
	scanf("%d",&x.Namsinh);
	
}while(x.Namsinh<1980 || x.Namsinh>2010);

do
{
	printf("\n NHap ket qua cuoi khoa:");
	scanf("%f",&x.Kqcuoikhoa);
	
}while(x.Kqcuoikhoa<0 || x.Kqcuoikhoa>4);

fflush(stdin);
 if(x.Kqcuoikhoa<=1.5)
  {
  	strcpy(x.Xeploai,"Yeu");
  }
  else
   if(x.Kqcuoikhoa<=2.5)
    {
    	strcpy(x.Xeploai,"Trung binh");
    }
    else
      if(x.Kqcuoikhoa<=3.0)
      {
       	strcpy(x.Xeploai,"Kha");
       }
         else
          if(x.Kqcuoikhoa<=3.8)
          {
         	strcpy(x.Xeploai,"Gioi");
          }
             else 
              {
              	strcpy(x.Xeploai,"Xuatsac");
              }
        }
void NhapsvN(SINHVIEN a[],int n)
{
	for(int i=0;i<n;i++)
	 {
	 	printf("\n Nhap sinh vien thu %d",i+1);
	 	Nhapsv(a[i]);
	 }
}

void Xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%14.1f|%-10s|%-10s",x.Masv,x.Hotensv,x.Phai,x.Namsinh,x.Nganhhoc,x.Kqcuoikhoa,
	                                                                                                x.Xeploai,x.Quequan);
}

void XuatsvN(SINHVIEN a[], int n)
{
	system("cls");
	printf("\n\n|--------------------------------------------------------------------------------------------\n");
	    printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc | KQ cuoi khoa | Xep loai | Que quan |\n");
	    
	  for(int i=0;i<n;i++)
	   {
	  printf("\n|-----|------------------|------|----------|-----------|--------------|----------|----------|\n");
	    Xuatsv(a[i]);
	   }
}

//-: de can phai
void Sapxep(SINHVIEN a[], int n)
{
	SINHVIEN tmp;
	 for(int i=0;i<n;i++)
	   {
	   	for(int j=i+1;j<n;++j)
	   	 {
	   	 	if(a[i].Kqcuoikhoa> a[j].Kqcuoikhoa)
	   	 	 {
	   	 	 	tmp=a[i];
	   	 	 	a[i]=a[j];
	   	 	 	a[j]=tmp;
	   	     }
	   	 }
	   }
}

void INGX(SINHVIEN a[], int n)
{
	system("cls");
	printf("\n\n|--------------------------------------------------------------------------------------------\n");
	  printf("| Ma SV | Ho ten sinh vien | Phai | Nam sinh | Nganh hoc | Kq cuoi khoa | Xep loai | Que quan |");
	  
	   for(int i=0;i<n;i++)
	     {
	     	if(a[i].Kqcuoikhoa>=3.0)
	     	{
	printf("\n|-------|------------------|------|----------|-----------|--------------|----------|----------|\n");
	   Xuatsv(a[i]);
	     	}
	     }
}

void TIMSV(SINHVIEN a[], int n)
{
	system("cls");
	fflush(stdin);
	char Matim[10];
	printf("\n Nhap Ma sinh vien can tim:");
	gets(Matim);
	printf("\n\n|--------------------------------------------------------------------------------------------\n");
	  printf("| Ma SV | Ho ten sinh vien | Phai | Nam sinh | Nganh hoc | Kq cuoi khoa | XEp loai | Que quan |");
	  
	  for(int i=0;i<n;i++)
	   {
	   	if(strcmp(a[i].Masv,Matim)==0)
		  {
    printf("\n|-------|------------------|------|----------|-----------|--------------|----------|----------|\n");	 
	 Xuatsv(a[i]); 	
		  }	   
	  }
}



