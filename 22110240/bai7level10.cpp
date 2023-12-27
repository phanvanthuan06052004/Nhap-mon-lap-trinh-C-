#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[], int &n, int &vt);
void trichPhanDau(char S[],int n, char X[]);
void trichPhanCuoi(char S[], int n, char X[]);
void trichPhanGiua(char S[], int n, int vt, char X[]);
void xuat(char X[]);
int main()
{
	char S[100],X[100];
	int n,vt;
	nhap(S,n,vt);
	trichPhanDau(S,n,X);
	xuat(X);
	trichPhanCuoi(S,n,X);
	xuat(X);
	trichPhanGiua(S,n,vt,X);
	xuat(X);
	return 0;
}
void nhap(char S[], int &n, int &vt)
{
	gets(S);
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap vi tri pos: ";
	cin>>vt;
}
void trichPhanDau(char S[],int n, char X[])
{
	if(n>strlen(S))
		n=strlen(S);
	for(int i=0; i<n; i++)
		X[i]=S[i];
	X[n]='\0';
}
void trichPhanCuoi(char S[], int n, char X[])
{
	int vt=strlen(S)-n;
	if(vt<0)
		vt=0;
	for(int i=0; i<n; i++)
		X[i]=S[i+vt];
	X[n]='\0';
}
void trichPhanGiua(char S[], int n, int vt, char X[])
{
	if(n>strlen(S)-vt)
		n=strlen(S)-vt;
	for(int i=0; i<n; i++)
		X[i]=S[i+vt];
	X[n]='\0';
}
void xuat(char X[])
{
	puts(X);
}

