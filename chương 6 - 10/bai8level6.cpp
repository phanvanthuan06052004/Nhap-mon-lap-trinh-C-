#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int ktrCoTonTaiHayKhong(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrCoTonTaiHayKhong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int ktrCoTonTaiHayKhong(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(A[i]==0)
			return 1;
	return 0;
}
void xuat(int kq)
{
	cout<<kq;
}
