#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &x);
int XCoTrongMangVuaNhapHayKhong(int A[], int n, int x);
void xuat(int kq);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	int kq=XCoTrongMangVuaNhapHayKhong(A,n,x);
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
int XCoTrongMangVuaNhapHayKhong(int A[], int n, int x)
{
	for(int i=0; i<n; i++)
		if(A[i]==x)
			return 1;
	return 0;
}
void xuat(int kq)
{
	cout<<kq;
}
