#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int tinhThuong(int a, int b, float &t);
void xuat(int kq, float t);
int main()
{
	int a,b;
	nhap(a,b);
	float t;
	int kq=tinhThuong(a,b,t);
	xuat(kq,t);
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhThuong(int a, int b, float &t)
{
	if(b==0)
		return 0;
	else
	{
		t=(float)a/b;
		return 1;
	}
}
void xuat(int kq, float t)
{
	if(kq==1)
		cout<<t;
	else
		cout<<"khong chia duoc";
}
