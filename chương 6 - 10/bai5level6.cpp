#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int tinhTongCacSoChan(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=tinhTongCacSoChan(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tinhTongCacSoChan(int A[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
		if(A[i]%2==0)
			s=s+A[i];
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}
