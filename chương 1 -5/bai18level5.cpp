#include<iostream>
using namespace std;
void nhap(int &a, int &b, int &c);
int soNgay(int a, int b, int c);
void xuat(int kq);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=soNgay(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cout<<"nhap so ngay: ";
	cin>>a;
	cout<<"nhap thang: ";
	cin>>b;
	cout<<"nhap nam: ";
	cin>>c;
}
int soNgay(int a, int b, int c)
{
	int ngay=0, dem=0;
	for(int i=1; i<b; i++)
		if(i==1 ||i==3 || i==5 || i==7 || i==8 || i==10 || i==12)		
			ngay=ngay+ 31;
		else
			if(i==4 || i==6 || i==9 || i==11)
				ngay=ngay+30;
			else
				if(i==2)
					if((c%4==0 && c%100!=0) || (c%400==0))
						ngay=ngay+29;
					else
						ngay=ngay+28;
	if((c%4==0 && c%100!=0) || (c%400==0))
		dem=366-(ngay+a);
	else
		dem=365-(ngay+a);
	return dem;
}
void xuat(int kq)
{
	cout<<"so ngay con lai la: "<<kq;
}
