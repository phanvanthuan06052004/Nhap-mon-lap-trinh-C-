#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int timSoDuongCuoiCung(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=timSoDuongCuoiCung(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int timSoDuongCuoiCung(int A[], int n)
{
	for(int i=n-1; i>=0; i--)
		if(A[i]>0)
			return A[i];
	return -1;
}
void xuat(int kq)
{
	cout<<kq;
}
