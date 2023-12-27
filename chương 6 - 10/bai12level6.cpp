#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &x);
int ViTriDauTienMaXCoTrongMang(int A[], int n, int x);
void xuat(int kq);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	int kq=ViTriDauTienMaXCoTrongMang(A,n,x);
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
int ViTriDauTienMaXCoTrongMang(int A[], int n, int x)
{
	for(int i=0; i<n; i++)
		if(A[i]==x)
			return i;
	return -1;
}
void xuat(int kq)
{
	cout<<"vi tri dau tien co chua x la vi tri so: "<<kq;
}
