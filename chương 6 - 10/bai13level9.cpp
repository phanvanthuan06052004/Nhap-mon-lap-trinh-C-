#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[], int &n);
bool laChinhPhuong(int n);
void xoa1GT(int A[], int &n, int i);
void xoaTatCaSoChinhPhuong(int A[], int n);
void xuat(int A[], int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	xoaTatCaSoChinhPhuong(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool laChinhPhuong(int n)
{
	float d=sqrt(n);
	if((int)d==d)
		return true;
	else
		return false;
}
void xoa1GT(int A[], int &n, int i)
{
	for(int j=i; j<n; j++)
		A[j]=A[j+1];
	n--;
}
void xoaTatCaSoChinhPhuong(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(laChinhPhuong(A[i])==true)
		{
			xoa1GT(A,n,i);
			i--;
		}
	}
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)	
		if(A[i]>0)
			cout<<A[i]<<" ";
}
