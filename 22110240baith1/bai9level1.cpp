#include<iostream>
using namespace std;
void nhap(double &n);
int lamTron(double n);
void xuat(int kq);
int main()
{
	double(n);
	nhap(n);
	int kq=lamTron(n);
	xuat(kq);
	return 0;
}
void nhap(double &n)
{
	cin>>n;
}
int lamTron(double n)
{
	int y=int(n);
	if((y > 0) && (n-y >= 0.5))		
		return y+1;
	else
		if((y < 0) && (n-y <= -0.5))
			return y-1;
		else
			return y;
}
void xuat(int kq)
{
	cout<<kq;
}
