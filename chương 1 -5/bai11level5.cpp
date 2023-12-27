#include<iostream>
using namespace std;
void nhap(int &n);
int giaiThua(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq= giaiThua(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int giaiThua(int n)
{
	int p=1, s=0;
	for(int i=1; i<=n; i++)
	{
		p=p*i;
		s=s+p;
	}
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
