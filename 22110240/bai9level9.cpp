#include<iostream>
using namespace std;
void nhap(int A[], int B[], int &n, int &m);
int demSoLuongXuatHien1in2(int A[], int B[], int n, int m);
void xuat(int kq);
int main()
{
	int A[100],B[100],n,m;
	nhap(A,B,n,m);
	int kq=demSoLuongXuatHien1in2(A,B,n,m);
	xuat(kq);
	return 0;
}
void nhap(int A[], int B[], int &n, int &m)
{
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int j=0; j<m; j++)
		cin>>B[j];
}
int demSoLuongXuatHien1in2(int A[], int B[], int n, int m)
{
	int co,dem=0;
	for(int i=0; i<n; i++)
	{
		co=1;
		for(int j=0; j<m;j++)
		{
			if(A[i]==B[j])
			{
				co=0;
				break;
			}
		}
		if(co==1)
			dem++;
	}
	for(int j=0; j<m; j++)
	{
		co=1;
		for(int i=0; i<n; i++)
		{
			if(B[j]==A[i])
			{
				co=0;
				break;
			}
		}
		if(co==1)
			dem++;
	}
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}
