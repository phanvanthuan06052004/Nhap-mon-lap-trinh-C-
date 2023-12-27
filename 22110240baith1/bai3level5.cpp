#include<iostream>
using namespace std;
void nhap(int &n);
bool laNT(int x);
int demSoNT(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=demSoNT(n);
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
int demSoNT(int n)
{
	int dem=0;
	for(int i=1; i<n; i++)
		if(laNT(i)==true)
			dem++;
	return dem;
}
void xuat(int kq)
{
	cout<<"so luong so NT la: "<<kq;
}
