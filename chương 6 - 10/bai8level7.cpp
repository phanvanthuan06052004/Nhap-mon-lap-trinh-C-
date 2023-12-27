#include<iostream>
using namespace std;
void nhap(int A[], int &n);
float TrungBinhCong(int A[], int n);
bool laSoNT(int n);
void xuat(float kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=TrungBinhCong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float TrungBinhCong(int A[], int n)
{
	float s=0,x=0;
	for(int i=0; i<n; i++)
	{
		if(laSoNT(A[i])==true)
		{
			s=s+A[i];
			x++;
		}
	}
	return (float)s/x;
}
bool laSoNT(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	else
		return false;
}
void xuat(float kq)
{
	cout<<kq;
}
