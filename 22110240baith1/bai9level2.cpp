#include<iostream>
using namespace std;
void nhap(int &a, int &b, int &c);
int nhoNhi(int a, int b, int c);
void xuat(int kq);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq= nhoNhi(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int nhoNhi(int a, int b, int c)
{
	if((a>c && a<b) || (a<c && a>b))
		return a;
	else
		if((b>c && b<a) || (b<c && b>a))
			return b;
		else
			return c;
}
void xuat(int kq)
{
	cout<<kq;
}
