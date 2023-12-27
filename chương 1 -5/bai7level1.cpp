#include<iostream>
using namespace std;
void nhap(float &a, float &b, float &c);
int ktrTamGiac(float a, float b, float c);
void xuat(int kq);
int main()
{
	float a,b,c;
	nhap(a,b,c);
	int kq=ktrTamGiac(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(float &a, float &b, float &c)
{
	cin>>a>>b>>c;
}
int ktrTamGiac(float a, float b, float c)
{
	if(a>0 && b>0 && c>0 && (a+b)>c && (b+c)>a && (a+c)>b)
		return 1;
	else
		return 2;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"la tam giac";
	else
		cout<<"khong la tam giac";
}
