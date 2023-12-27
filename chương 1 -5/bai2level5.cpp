#include<iostream>
using namespace std;
void nhap(int &n);
bool laHH(int x);
int demSoHH(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq= demSoHH(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool laHH(int x)
{
	int t=0;
	for(int i=1; i<x; i++)
		if(x%i==0)
			t=t+i;
	if(t==x)
		return true;
	else
		return false;	
}
int demSoHH(int n)
{
	int dem=0;
	for(int i=1; i<n; i++)
		if(laHH(i)==true)
			dem++;
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}

