#include<iostream>
#include<cmath>
using namespace std;
void nhap(int &n);
bool check(int n);
int DemSoCP(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap (n);
	int kq=DemSoCP(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap n: ";
	cin>>n;
}
bool check(int n)
{
	int tem=(sqrt)(n);
	if(tem*tem==n)
		return true;
	return false;
}
int DemSoCP(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(check(i)==true)
			dem=dem+1;	
	return dem;
}
void xuat(int kq)
{
	cout<<"so luong so chinh phuong: "<<kq;
}
