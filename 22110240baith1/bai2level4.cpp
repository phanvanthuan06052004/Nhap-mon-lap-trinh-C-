#include<iostream>
using namespace std;
void nhap(int &n);
bool ktrSoNguyenTo(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	bool kq=ktrSoNguyenTo(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool ktrSoNguyenTo(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	else
		return false;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"la so nguyen to";
	else
		cout<<"khong la so nguyen to";
}
