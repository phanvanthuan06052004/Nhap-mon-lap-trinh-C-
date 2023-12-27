#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int tinhngay(int a, int b);
void xuat(int kq);
int main()
{
	int a,b;
	nhap(a,b);
    int kq=tinhngay(a,b);
    xuat(kq);
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhngay(int a, int b)
{
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		return 0;
	else
		if(a==4||a==6||a==9||a==11)
			return 1;
		else
			if(a==2)
			{
				if(b%4==0&&b%100!=0||b%400==0)
					return 2;
				else
					return 3;
			}
}
void xuat(int kq)
{ 
	if (kq==0)
	   cout<<"co 31 ngay";
	else 
		if(kq==1)
	   		cout<<"co 30 ngay";
		else 
			if(kq==2)
	   			cout<<"co 29 ngay";
			else
	  			cout<<"co 28 ngay";
}

