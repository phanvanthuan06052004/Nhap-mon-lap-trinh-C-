#include<iostream>
#include<iomanip>
using namespace std;
void nhap(float &a, float &b);
float tinhChuVi(float a, float b);
void xuat(float kq);
int main()
{
	float a,b;
	nhap(a,b);
	float kq=tinhChuVi(a,b);
	xuat(kq);
	return 0;
}
void nhap(float &a, float &b)
{
	cin>>a>>b;
}
float tinhChuVi(float a, float b)
{
	float t=(a+b)*2;
	return t;
}
void xuat(float kq)
{
	cout<<fixed<<setprecision(2)<<kq;
}
