#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[], int &n);
int tongCacSoCP(int A[], int n);
bool laCP(int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq= tongCacSoCP(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tongCacSoCP(int A[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
		if(laCP(A[i])==true)
			s=s+A[i];
	return s;
}
bool laCP(int n)
{
	float d=sqrt(n);
	if((int)d==d)
		return true;
	else
		return false;
}
void xuat(int kq)
{
	cout<<kq;
}
