#include<iostream>
using namespace std;
void nhap(int &y);
int namNhuan(int y);
void xuat(int kq);
int main()
{
	int y;
	nhap(y);
	int kq=namNhuan(y);
	xuat(kq);
	return 0;
}
void nhap(int &y)
{
	cin>>y;
}
int namNhuan(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
		return 1;
	else
		return 2;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"la nam nhuan";
	else
		cout<<"khong la nam nhuan";
}
