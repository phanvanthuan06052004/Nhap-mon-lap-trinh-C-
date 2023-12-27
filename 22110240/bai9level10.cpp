#include<bits/stdc++.h>
using namespace std;
void nhap(char S[]);
void doiChuThuongThanhHoa(char S[]);
void xuat(char S[]);
int main()
{
	char S[100];
	nhap(S);
	doiChuThuongThanhHoa(S);
	xuat(S);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
void doiChuThuongThanhHoa(char S[])
{
	int len=strlen(S);
	for(int i=0; i<len; i++)
	{
		if(i==0 || (i>0 && S[i-1]==' '))
			S[i]=S[i]-32;
	}
}
void xuat(char S[])
{
	for(int i=0; i<strlen(S); i++)
		cout<<S[i];
}
