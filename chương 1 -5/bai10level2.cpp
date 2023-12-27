#include<iostream>
using namespace std;
void nhap(int &h, int &m, int &s );
bool gioTiepTheo(int h, int m, int s, int &h1, int &m1, int &s1);
bool hopLe(int h, int m, int s);
void xuat(int kq, int h, int m, int s);
int main()
{
	int h,m,s,h1,m1,s1;
	nhap(h,m,s);
	bool kq=gioTiepTheo(h,m,s,h1,m1,s1);
	xuat(kq,h1,m1,s1);
	return 0;
}
void nhap(int &h, int &m, int &s)
{
	cin>>h>>m>>s;
}
bool gioTiepTheo(int h, int m, int s, int &h1, int &m1, int &s1)
{
	if(hopLe(h,m,s))
	{
		h1=h;
		m1=m;
		s1= s + 1;
		if(s1==60)
		{
			s1=0;
			m1++;
			if(m1==60)
			{
				m1=0;
				h1++;
				if(h1==24)
					h1=0;
			}
		}
		return true;
	}
	else 
		return false;
}
bool hopLe(int h, int m, int s)
{
	if(h>=0 && h<24 && m>=0 && m<60 && s>=0 && s<60)
		return true;
	else
		return false;
}
void xuat(int kq, int h, int m, int s)
{
	if(kq==true)
		cout<<h<<" "<<m<<" "<<s;
	else 
		cout<<"khong hop le";
}
