#include<iostream>
using namespace std;
void nhap(int &n);
int tinhtong(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=tinhtong(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
int tinhtong(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
		s=s+i;
	return s;
}
void xuat(int kq)
{
	cout<<"tong la: "<<kq;
}

