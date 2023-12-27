#include<iostream>
using namespace std;
void nhap(int &n);
bool soHoanHao(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	bool kq=soHoanHao(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool soHoanHao(int n)
{
	int s=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		return true;
	else
		return false;
			
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"la so hoan hao";
	else
	
		cout<<"khong la so hoan hao";
}
