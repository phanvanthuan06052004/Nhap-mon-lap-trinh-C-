#include<iostream>
using namespace std;
void nhap(int &n);
bool KtrGiamDan(int);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	bool kq=KtrGiamDan(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool KtrGiamDan(int n)
{
	int ChuSoCuoi=n%10;
	n=n/10;
	while(n!=0)
	{
		int ChuSoKeCuoi=n%10;
		n/=10;
		if(ChuSoCuoi>=ChuSoKeCuoi)
		{
			return false;
		}
		else
		{
			ChuSoCuoi=ChuSoKeCuoi;
		}
	}
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"Day giam Dan";
	else
		cout<<"Day Khong giam Dan";
}
