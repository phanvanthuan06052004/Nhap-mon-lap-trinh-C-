#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
void xoaKyTu(char S[], int vitrixoa);
void xoaKyTuKhoangTrang(char S[]);
int main()
{
	char S[100];
	nhap(S);
	xoaKyTuKhoangTrang(S);
	return 0;
}
void nhap(char S[])
{
	cout<<"nhap chuoi: ";
	gets(S);
}
void xoaKyTu(char S[], int vitrixoa)
{
	int n=strlen(S);
	for(int i=vitrixoa+1; i<n;i++)
		S[i-1]=S[i];
	S[n-1]='\0';
}
void xoaKyTuKhoangTrang(char S[])
{
	for(int i=0; i<strlen(S);i++)
	{
		if(S[i]==' ')
		{
			xoaKyTu(S,i);
			i--;
		}
	}
	puts(S);
}
