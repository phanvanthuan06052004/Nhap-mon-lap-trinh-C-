#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int soGanhDauTien(int A[], int n);
bool laSoGanh(int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=soGanhDauTien(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int soGanhDauTien(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(laSoGanh(A[i])==true)
		{
			return A[i];
			break;
		}
	}
	return 0;
}
bool laSoGanh(int n)
{
	if(n/10>0)
	{
		int x=0,m,dem=n;
		while(dem!=0)
		{
			m=dem%10;
			dem/=10;
			x=x*10+m;
		}
		if(x==n)
			return true;
		else
			return false;
	}
	else 
		return false;
}
void xuat(int kq)
{
	if(kq==0)
		cout<<"khong co gia tri thoa so ganh";
	else
		cout<<kq;
}
