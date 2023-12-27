#include<iostream>
using namespace std;
void nhap(int &n, float &x);
float tu(int n, float x);
int mau(int n);
float tinhXchiaGiaiThua(int n, float x);
void xuat(float kq);
int main()
{
	int n;
	float x;
	nhap(n,x);
	float kq=tinhXchiaGiaiThua(n,x);
	xuat(kq);
	return 0;
}
void nhap(int &n, float &x)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
}
float tu(int n, float x)
{
	float s=1;
	for(int i=1; i<=n; i++)
		s=s*x;
	return s;
}
int mau(int n)
{
	int t=1;
	for(int i=1; i<=n; i++)
		t=t*i;
	return t;
}
float tinhXchiaGiaiThua(int n, float x)
{
	float kq=0;
	for(int i=0; i<=n; i++)
		kq=kq+(tu(i,x)/mau(i));
	return kq;
}
void xuat(float kq)
{
	cout<<kq;
}
