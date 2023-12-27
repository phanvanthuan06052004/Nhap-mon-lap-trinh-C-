#include<iostream>
using namespace std;
void nhap(int &n);
int demchuSoNguyenTo(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=demchuSoNguyenTo(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int demchuSoNguyenTo(int n)
{
	int s=0;
	while(n>0)
	{
		int dem=0;
		int c=n%10;
		n=n/10;
		for(int i=1; i<=c; i++)
			if(c%i==0)
				dem++;
		if(dem==2)
			s++;
	}
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
