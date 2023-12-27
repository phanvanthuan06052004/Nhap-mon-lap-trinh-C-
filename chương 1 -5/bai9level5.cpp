#include<iostream>
using namespace std;
void nhap(int &a, int &b, int &c, int &d);
int ucln(int tu, int mau);
int phanSoToiGian(int a, int b, int c, int d, int &t, int &m);
void xuat(int t, int m);	
int main()
{
	int a,b,c,d,t,m;
	nhap(a,b,c,d);
	phanSoToiGian(a,b,c,d,t,m);
	xuat(t,m);
	return 0;
}
void nhap(int &a, int &b, int &c, int &d)
{
	cin>>a>>b>>c>>d;
}
int ucln(int tu, int mau)
{
	if(tu==0||mau==0)
		return tu+mau;
	else
		while(tu!=mau)
	  	{
	  		if(tu>mau)
	  	 	{
				tu=tu-mau;
	     	}
	   		else
	        	mau=mau-tu;
	  	}
	return tu;
	
}
int phanSoToiGian(int a, int b, int c, int d, int &t, int &m)
{
	int tu,mau;
	if((b!=0) && (d!=0))
	{
		tu=(a*d)+(b*c);
		mau=b*d;
		t=tu/ucln(tu,mau);
		m=mau/ucln(tu,mau);
	}		
}
void xuat(int t,  int m)
{
	cout<<t<<"/"<<m;
}
