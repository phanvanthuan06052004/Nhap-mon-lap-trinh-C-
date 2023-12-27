#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int lonnhat(int a, int b);
void xuat(int kq);
int main()
{
	int a,b;
	nhap(a,b);
	int kq=lonnhat(a,b);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int lonnhat(int a, int b)
{
	if(a>b) 
		return a;
	else 
		return b;
}
void xuat(int kq)
{
	cout<<kq;
}
