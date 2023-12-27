#include<iostream>
using namespace std;
void nhap(float A[], int &n);
float soAmDauTien(float A[], int n);
void xuat(float kq);
int main()
{
	float A[100];
	int n;
	nhap(A,n);
	float kq=soAmDauTien(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float soAmDauTien(float A[], int n)
{
	for(int i=0; i<n; i++)
		if(A[i]<0)
			return A[i];
	return 1;
}
void xuat(float kq)
{
	cout<<kq;
}
