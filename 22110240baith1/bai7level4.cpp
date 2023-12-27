#include<iostream>
using namespace std;
void nhap(int &n);
bool ktrSoChan(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	bool kq=ktrSoChan(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool ktrSoChan(int n)
{
	while(n>0)
	{
		int t=n%10;
		if(t%2!=0)
			return false;
		n=n/10;
	}
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"DUNG";
	else
		cout<<"SAI";
}
