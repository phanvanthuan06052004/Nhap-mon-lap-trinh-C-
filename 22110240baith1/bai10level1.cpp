#include<iostream>
using namespace std;
void nhap(double &n);
int soNguyenLonNhat(double n);
void xuat(int kq);
int main()
{
	double n;
	nhap(n);
	int kq= soNguyenLonNhat(n);
	xuat(kq);
	return 0;
}
void nhap(double &n)
{
	cin>>n;
}
int soNguyenLonNhat(double n)
{
	int y=int(n);
	if(((n-y) >= 0.1) && ((n-y) <= 0.9))
		return y;
	else
		if((n-y)==0)
			y=y-1;
			return y;
}
void xuat(int kq)
{
	cout<<kq;
}
