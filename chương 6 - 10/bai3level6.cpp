#include<iostream>
using namespace std;
void nhap(int A[], int &n);
float trungBinhCong(int A[], int n);
void xuat(float kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=trungBinhCong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float trungBinhCong(int A[], int n)
{
	float s=0;
	for(int i=0; i<n; i++)
		s=s+A[i];
	return (float)s/n;
}
void xuat(float kq)
{
	cout<<kq;
}
