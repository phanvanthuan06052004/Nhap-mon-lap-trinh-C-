#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
int soChinhPhuong(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=soChinhPhuong(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int soChinhPhuong(int n)
{
	float d=sqrt(n);
	if((int)d==d)
		return 1;
	else
		return 2;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"la so chinh phuong";
	else
		cout<<"khong la so chinh phuong";
}

