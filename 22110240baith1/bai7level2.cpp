#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a, int &b, int &c);
int ptBacHai(int a, int b, int c,float &x1, float &x2);
void xuat(int kq, float x1, float x2);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	float x1,x2,x;
	int kq=ptBacHai(a,b,c,x1,x2);
	xuat(kq,x1,x2);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int ptBacHai(int a, int b, int c, float &x1, float &x2)
{
	if(a==0)
		if(b==0)
			if(c==0)
				return 5;
			else
				return 1;
		else
		{
			x1=float(-c)/b;
			return 4;
		}
	else	
	{
		float denta=b*b - 4*a*c;
		if(denta<0)
			return 1;
		else
			if(denta==0)
			{
				x1=float(-b)/(2*a);
				return 2;
			}
			else
			{
				x1=(-b+sqrt(denta))/(2*a);
				x2=(-b-sqrt(denta))/(2*a);
				return 3;
			}
	}
}
void xuat(int kq, float x1, float x2)
{
	if(kq==1)
		cout<<"pt vo nghiem";
	else
		if(kq==2)
			cout<<"pt co nghiem kep: x1=x2="<<x1;
		else
			if(kq==3)
				cout<<"pt co 2 nghiem phan biet:  x1= "<<x1<<" x2= "<<x2;
			else
				if(kq==4)
					cout<<"pt co 1 nghiem: "<<x1;
				else
					cout<<"pt co nghiem tuy y";
}

