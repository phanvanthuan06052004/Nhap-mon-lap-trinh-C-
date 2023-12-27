#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int uocSoChungLonNhat(int a,int b);
void xuat(int kq);
int main()
{
	int a,b;
	nhap(a,b);
	int kq= uocSoChungLonNhat(a,b);
	xuat(kq);
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int uocSoChungLonNhat(int a,int b)
{
	if(a==0||b==0)
		return a+b;
	else
		while(a!=b)
	  	{
	  		if(a>b)
	  	 	{
				a=a-b;
	     	}
	   		else
	        	b=b-a;
	  	}
	return a;
}
void xuat(int kq)
{
	cout<<kq;
}
