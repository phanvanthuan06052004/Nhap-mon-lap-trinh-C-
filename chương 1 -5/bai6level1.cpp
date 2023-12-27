#include<iostream>
using namespace std;
void nhap(int &h, int &m, int &s);
int dongHo(int h, int m, int s);
void xuat(int kq);
int main()
{
	int h,m,s;
	nhap(h,m,s);
	int kq=dongHo(h,m,s);
	xuat(kq);
	return 0;
}
void nhap(int &h, int &m, int &s)
{
	cout<<"nhap Gio: ";
	cin>>h;
	cout<<"nhap Phut: ";
	cin>>m;
	cout<<"nhap Giay: ";
	cin>>s;
}
int dongHo(int h, int m, int s)
{
	if((h>=0 && h<=23) && (m>=0 && m<=59) && (s>=0 && s<=59))
		return 1;
	else 
		return 2;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"hop le";
	else
		cout<<"khong hop le";
}
