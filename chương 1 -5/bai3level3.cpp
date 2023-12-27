#include<iostream>
using namespace std;
void nhap(float &n);
float tinhtong(float n);
void xuat(float kq);
int main()
{
	float n;
	nhap(n);
	float kq=tinhtong(n);
	xuat(kq);
}
void nhap(float &n)
{
	cin>>n;
}
float tinhtong(float n)
{
	
	float s=0;
	if(n>0)
	{
	   for(float i=1;i<=n;i++)
		{
	  		s=s+1/i;
	  	}
	  return s;
    }
	else 
	   return 0;
}
void xuat(float kq)
{
	if(kq==0)
		cout<<"nhap lai so nguyen duong";
	else 
		cout<<"ket qua la: "<<kq;
}

