#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
	int xoa(char s[50], int vitrixoa);
	int xoakytu(char s[50]);
	int chuanhoachuoi(char s[50]);
	int demsotu(char s[50]);
	int demkytu(char s[50]);
	void ghepkytu(char s[50], char s2[50]);
int main()
{
	char s[50], s2[50];
	printf("\n nhap chuoi:");
	gets(s);
	chuanhoachuoi(s);
	printf("\n chuan hoa chuoi :");
	puts(s);
	demsotu(s);
	demkytu(s);
	ghepkytu(s,s2);
}
int xoa(char s[50], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa; i<n; i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakytu(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,1);
		i--;
	}
	if(s[0]==' ')
	xoa(s,0);
	if(s[strlen(s)-1]==' ')
	xoa(s,strlen(s)-1);
}
int chuanhoachuoi(char s[50])
{
	int i=0;
	strlwr(s);
	xoakytu(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
}
int demsotu(char s[50])
{
	int demsotu=1;
	strlwr(s);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]==' ')
		demsotu++;
	}
	printf("\n so tu %d",demsotu);
}
int demkytu(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n nhap mot ky tu:=");
	scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
		demkytu++;
	}
	printf("so ky tu %d",demkytu);
}
void ghepkytu(char s[50], char s2[50])
{
	int i,j,size,size1,size2;
	fflush(stdin);
	printf("\n nhap chuoi s2=");
	gets(s2);
	chuanhoachuoi(s2);
	size1=strlen(s);
	size2=strlen(s);
	size=size1+size2;
	j=0;
	for (i=size1;i<size;i++)
	{
		s[i]=s2[j];
			j++;
	}
	s[i]='\0';
	printf("ket qua khi noi chuoi la:\n");
	printf("%s",s);
}



