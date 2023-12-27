#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int tinhnghiem(int a, int b, float &x);
void xuat(int kq, float x);
int main()
{
	int a,b;
	nhap (a,b);
	float x;
	int kq= tinhnghiem(a,b,x);
	xuat (kq,x);
	return 0;
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhnghiem(int a, int b, float &x)
{
	if(a==0)
	{
		if(b==0)
			return 1;
		else 
		    return 0;
	}
	else
	{
		x=float(-b)/a;
		return 2;
	}
}
void xuat(int kq, float x)
{
	if (kq==0)
		cout<<"vo nghiem";
	else 
		if(kq==1)
	    	cout<<"vo so nghiem";
		else 
	    	cout<<x;
}
