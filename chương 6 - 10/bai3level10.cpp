#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
void xuatChuoiDaoNguoc(char S[]);
int main()
{
	char S[100];
	nhap(S);
	xuatChuoiDaoNguoc(S);
	return 0;
}
void nhap(char S[])
{
	cout<<"nhap chuoi: ";
	gets(S);
}
void xuatChuoiDaoNguoc(char S[])
{
	strrev(S);
	puts(S);
}
