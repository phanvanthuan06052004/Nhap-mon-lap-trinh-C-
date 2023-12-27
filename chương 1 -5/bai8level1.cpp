#include<iostream>
#include<ctype.h>
using namespace std;
void nhap(char &n);
char chuyenKieuChu(char n);
void xuat(char kq);
int main()
{
	char n;
	nhap(n);
	char kq= chuyenKieuChu(n);
	xuat(kq);
	return 0;	
}
void nhap(char &n)
{
	cin>>n;
}
char chuyenKieuChu(char n)
{
	if(n==toupper(n))
		return tolower(n);
	else
		return toupper(n);
}
void xuat(char kq)
{
	cout<<kq;
}
