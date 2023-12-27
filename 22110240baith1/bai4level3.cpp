#include<iostream>
using namespace std;
void nhap(int &n);
int giaiThua(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=giaiThua(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int giaiThua(int n)
{
	int s=1;
	for(int i=1; i<=n; i++)
	   s=s*i;
	return s;
}
void xuat(int kq)
{
	cout<<"ket qua la: "<<kq;
}

