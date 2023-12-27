#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
void xuatSoTuTrongChuoi(char S[]);
int main()
{
	char S[100];
	nhap(S);
	xuatSoTuTrongChuoi(S);
	return 0;
}
void nhap(char S[])
{
	cout<<"nhap chuoi: ";
	gets(S);
}
void xuatSoTuTrongChuoi(char S[])
{
	int dem=strlen(S);
	cout<<dem;
}
