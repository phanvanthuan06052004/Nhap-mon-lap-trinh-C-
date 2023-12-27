#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int ktrToanSoChan(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrToanSoChan(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int ktrToanSoChan(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(A[i]%2!=0)
		{
			return 0;
			break;
		}
	return 1;
}
void xuat(int kq)
{
	cout<<kq;
}
	

