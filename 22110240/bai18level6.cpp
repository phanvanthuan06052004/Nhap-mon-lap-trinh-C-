#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void daoNguocMang(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	daoNguocMang(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void daoNguocMang(int A[], int n)
{
	for(int i=n-1; i>=0; i--)
		cout<<A[i]<<" ";
}
