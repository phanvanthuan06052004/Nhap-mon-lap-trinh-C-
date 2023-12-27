#include<iostream>
using namespace std;
void nhap(int &n);
int tinhtongUocSo(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=tinhtongUocSo(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int tinhtongUocSo(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			s=s+i;
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
