#include<iostream>
using namespace std;
void nhap(int &a, int &b, int &c);
int min(int a, int b, int c);
void xuat(int kq);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq= min(a,b,c);
	xuat(kq);
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int min(int a, int b, int c)
{
	if ((a<=b) && (a<=c))
		return a;
	else 
		if(b<=c)
	    	return b;
		else 
	    	return c;
}
void xuat(int kq)
{
	cout<<kq;
}
