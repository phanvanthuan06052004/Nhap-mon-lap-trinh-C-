#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int tongCucTri(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=tongCucTri(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tongCucTri(int A[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
	{
		int x=A[i]-A[i-1];
		int y=A[i]-A[i+1];
		if( (x<0 && y<0) || (x>0 && y>0) )
			s=s+A[i];
	}
	return s;
		
}
void xuat(int kq)
{
	cout<<kq;
}
