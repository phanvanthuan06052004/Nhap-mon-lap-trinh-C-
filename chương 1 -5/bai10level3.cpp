#include<iostream>
using namespace std;
void nhap(int &a, int &b, int &n);
int tinhtong(int a,int b, int n);
void xuat(int kq);
int main()
{
	int a,b,n;
	nhap(a,b,n);
	int kq=tinhtong(a,b,n);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &n)
{
	cout<<"nhap n: ";
	cin>>n;
	do{
		cout<<"nhap a: ";
		cin>>a;
	}
	while(a>=n);
		do{
		cout<<"nhap b: ";
		cin>>b;
	}
	while(b>=n);
}
int tinhtong(int a,int b, int n )
{
	int s=0;
	for(int i=1;i<n;i++)
		if(i%a==0 && i%b!=0)
			s=s+i;
    return s;	
}
void xuat(int kq)
{
	cout<<"ket qua la: "<<kq;
}

