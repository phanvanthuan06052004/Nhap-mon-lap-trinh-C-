#include<iostream>
using namespace std;
void nhap(int &n);
int soToTien(int n, int &a, int &b, int &c, int &d);
void xuat(int a, int b, int c, int d);
int main()
{
	int a,b,c,d,n;
	nhap(n);
	soToTien(n,a,b,c,d);
	xuat(a,b,c,d);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int soToTien(int n, int &a, int &b, int &c, int &d)
{
	int t100,t50,t20,t10;
	t100=n/100;
	n=n-t100*100;
	t50=n/50;
	n=n-t50*50;
	t20=n/20;
	n=n-t20*20;
	t10=n/10;
	n=n-t10*10;
	a=t100;
	b=t50;
	c=t20;
	d=t10;
}
void xuat(int a, int b, int c, int d)
{
	cout<<a<<" to 100k "<<"; "<<b<<" to 50k"<<"; "<<c<<" to 20k"<<"; "<<d<<" to 10k";
}
