#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &x);
int tongCacPhanTuLonHonX(int A[], int n, int x);
void xuat(int kq);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	int kq=tongCacPhanTuLonHonX(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tongCacPhanTuLonHonX(int A[], int n, int x)
{
	int s=0;
	for(int i=0; i<n; i++)
		if(A[i]>x)
			s=s+A[i];
	return s;
}
void xuat(int kq)
{
	cout<<"tong cac phan tu lon hon X la: "<<kq;
}
