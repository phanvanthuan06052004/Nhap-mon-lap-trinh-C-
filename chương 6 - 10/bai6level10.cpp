#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
int tongCacKyTuSo(char S[]);
void xuat(int kq);
int main()
{
	char S[100];
	nhap(S);
	int kq=tongCacKyTuSo(S);
	xuat(kq);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
int tongCacKyTuSo(char S[])
{
	int dem=strlen(S);
	int co=0,sum=0,i=0;
	while(i<=dem)
	{
		if(S[i]>='0' && S[i]<='9')
			co=co*10+(S[i]-'0');
		else
		{
			sum=sum+co;
			co=0;
		}
		i++;
	}
	return sum;
}
void xuat(int kq)
{
	cout<<kq;
}
