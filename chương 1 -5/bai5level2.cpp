#include<iostream>
using namespace std;
void nhap(float &a, float &b, float &c, float &d);
float giaTriLonNhat(float a, float b, float c, float d);
void xuat(float kq);
int main()
{
 	float a,b,c,d;
 	nhap(a,b,c,d);
	float kq=giaTriLonNhat(a,b,c,d);
 	xuat(kq);
 	return 0;
}
void nhap(float &a, float &b, float &c, float &d)
{
	cin>>a>>b>>c>>d;
}
float giaTriLonNhat(float a, float b, float c, float d)
{
  	if((a>=b) && (a>=c) && (a>=d))
		return a;
	else
		if((b>=c) && (b>=d))
			return b;
		else
			if(c>=d)
				return c;
			else
				return d; 
}
void xuat(float kq)
{
	cout<<kq;
}
