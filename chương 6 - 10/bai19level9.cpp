#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int soLonNhi(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=soLonNhi(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int soLonNhi(int A[], int n)
{
	int SLnhat,SLnhi;
	if(A[0]>A[1])
	{
		SLnhat=A[0];
		SLnhi=A[1];
	}
	else
	{
		SLnhat=A[1];
		SLnhi=A[0];
	}
	for(int i=0; i<n; i++)
	{
		if(A[i]>SLnhat)
		{
			SLnhi=SLnhat;
			SLnhat=A[i];
		}
		else
			if(A[i]>SLnhi)
				SLnhi=A[i];
	}
	return SLnhi;
}
void xuat(int kq)
{
	cout<<kq;
}
