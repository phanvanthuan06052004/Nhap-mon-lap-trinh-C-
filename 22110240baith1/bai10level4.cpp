#include<iostream>
using namespace std;
void nhap(int &n);
int soDauTienFibonacci(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=soDauTienFibonacci(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int soDauTienFibonacci(int n)
{
	int a0=1; 
	int a1=1;
	int an=a0+a1;
	for(int i=1; i<=n; i++)
	{
		xuat(a0);
		a0=a1;
		a1=an;
		an=a0+a1;
	}
}
void xuat(int kq)
{
	cout<<kq<<" ";	
}
