#include<iostream>
using namespace std;
void nhap(int &n);
float tinhTong(int n);
void xuat(float kq);
int main()
{
	int n;
	nhap(n);
	float kq=tinhTong(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}

float tinhTong(int n)
{
	int p=0;
	int t=1;
	float s;
	for(int i=1; i<=n; i++)
	{
		t=t*i;
		p=p+i;
		s=s+1.0*p/t;
	}
	return s;
}
void xuat(float kq)
{
	cout<<kq;
}
