#include<iostream>
using namespace std;
void nhap(int &n);
int songuoclai(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq= songuoclai(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
int songuoclai(int n)
{
	int m=0;	
	while(n>0)
	{
		int x=n % 10;
		n=n/10;
		m=m*10+x;
	}
	return m;
}
void xuat(int kq)
{
	cout<<"so nguoc lai la: "<<kq;
}
