#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void dichTraiXoayVong(int A[],int n);
void xuat(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	dichTraiXoayVong(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void dichTraiXoayVong(int A[],int n)
{
	while(n--)
	{
		int co=A[0];
		for(int i=0; i<n; i++)
			A[i]=A[i+1];
		A[n-1]=co;		
	}
}
void xuat(int A[], int n)
{
	for(int i=n-1; i>=0; i--)
		cout<<A[i];
}
