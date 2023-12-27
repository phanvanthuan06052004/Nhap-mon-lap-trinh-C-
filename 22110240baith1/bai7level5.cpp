#include<iostream>
using namespace std;
void nhap(int &n);
bool laNT(int x);
int demUocSoNT(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=demUocSoNT(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool laNT(int x)
{
	int t=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			t++;
	if(t==2)
		return true;
	else 
		return false;
}
int demUocSoNT(int n)
{
	int dem=0;
	for(int i=1; i<n; i++)
		if(n%i==0)
			if(laNT(i)==true)
				dem++;
	return dem;
}
void xuat(int kq)
{
	cout<<"so luong so uoc so NT la: "<<kq;
}
