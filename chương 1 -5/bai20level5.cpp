#include<iostream>
using namespace std;
void nhap(int &n);
int phanTichn(int n);
void xuat(int i, int dem, int n);
int main()
{
	int n;
	nhap(n);
	int kq=phanTichn(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int phanTichn(int n)
{
	int dem=0;
	int i=2;
	while(n>0)
		if(n%i==0)
		{
			dem++;
			n=n/i;
		}
		else
		{
			if(dem>0)
				xuat(i,dem,n);
			dem=0;
			i++;
			if(n==1)
				break;
		}	
}
void xuat(int i, int dem, int n)
{
	if(dem==1)
		cout<<i;
	if(dem>1)
		cout<<i<<"^"<<dem;
	if(n>1)
		cout<<"*";
}
