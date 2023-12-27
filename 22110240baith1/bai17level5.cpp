#include<iostream>
using namespace std;
void nhap(int &d, int &m,int &y);
int tinhSoNgay(int d, int m, int y);
void xuat(int kq);
int main()
{
	int d,m,y;
	nhap(d,m,y);
	int kq=tinhSoNgay(d,m,y);
	xuat(kq);
	return 0;
}
void nhap(int &d, int &m,int &y)
{
	cin>>d>>m>>y;
}
int tinhSoNgay(int d, int m, int y)
{
	int soNgay=0;
	for(int i=1; i<m; i++)
		if(i==1 ||i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			soNgay=soNgay+31;
		else
			if(i==4 || i==6 || i==9 || i==11)
				soNgay=soNgay+ 30;
			else
				if(i==2)
					if((y%4==0 && y%100!=0) || (y%400==0))
						soNgay=soNgay+29;
					else
						soNgay=soNgay+ 28;
	int dem=soNgay+d;
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}
