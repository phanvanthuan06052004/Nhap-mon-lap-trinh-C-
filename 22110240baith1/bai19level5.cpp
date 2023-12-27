#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &d, int &m, int &y);
int tinhsoNgayTrongThang(int m, int y);
int tinhSoNgayTuDauNam(int d, int m, int y);
bool laNamNhuan(int y);
int tinhSoNgay(int d,int m, int y);
int tinhKhoangCach(int d1, int m1, int y1, int d2, int m2, int y2);
void xuat(int soNgay);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	nhap(d1,m1,y1);
	nhap(d2,m2,y2);
	int soNgay= tinhKhoangCach(d1,m1,y1,d2,m2,y2);
	xuat(soNgay);
	return 0;
}
void nhap(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}
int tinhsoNgayTrongThang(int m, int y)
{
	if(m==2)
		if(laNamNhuan(y))
			return 29;
		else
			return 28;
	else
		if(m==4 || m==6 || m==9 || m==11)
			return 30;
		else
			return 31;
}
int tinhSoNgayTuDauNam(int d, int m, int y)
{
	int soNgay=d;
	for(int i=1; i<m; i++)
		soNgay=soNgay+ tinhsoNgayTrongThang(i,y);
	return soNgay;
}
bool laNamNhuan(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
		return true;
	return false;
}
int tinhSoNgay(int d,int m, int y)
{
	int kc=0;
	for(int i=1; i<y; i++)
		if(laNamNhuan(i)==true)
			kc=kc+ 366;
		else
			kc=kc+ 365;
	kc=kc + tinhSoNgayTuDauNam(d,m,y);
	return kc;
}
int tinhKhoangCach(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int kc1= tinhSoNgay(d1,m1,y1);
	int kc2= tinhSoNgay(d2,m2,y2);
	int soNgay= abs(kc1-kc2);
	return soNgay;
}

void xuat(int soNgay)
{
	cout<<soNgay;
}
