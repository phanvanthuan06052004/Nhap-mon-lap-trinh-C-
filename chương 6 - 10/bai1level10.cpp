#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void nhap(char S[]);
int doiHe16Sang10(char S[]);
void xuat(int kq);
int main()
{
	char S[100];
	nhap(S);
	int kq=doiHe16Sang10(S);
	xuat(kq);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
int doiHe16Sang10(char S[])
{
	strrev(S);
	int sum=0;
	int co=strlen(S);
	for(int i=0; i<co;i++)
	{
		if(S[i]>='0' && S[i]<='9')
			sum=sum + (S[i] - '0')*pow(16,i);
		else
			sum=sum+(S[i]+10-'A')*pow(16,i);
	}
	return sum;
}
void xuat(int kq)
{
	cout<<kq;
}

