#include<iostream>
using namespace std;
void nhap(int &n);
int tinhtongBinhPhuong(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=tinhtongBinhPhuong(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
int tinhtongBinhPhuong(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
	   s=s+i*i;
	}
	return s;
}
void xuat(int kq)
{
	cout<<"tong la: "<<kq;
}
