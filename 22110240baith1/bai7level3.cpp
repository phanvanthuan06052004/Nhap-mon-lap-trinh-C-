#include<iostream>
using namespace std;
void nhap(int &n);
int tongCacChuSo(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq= tongCacChuSo(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int tongCacChuSo(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n%10;
		n/=10;
	}
	return sum;
}
void xuat(int kq)
{
	cout<<kq;
}
