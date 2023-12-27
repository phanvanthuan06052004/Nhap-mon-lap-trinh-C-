#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void xoa1GT(int A[], int &n, int i);
void xoaTatCaSoTrungNhau(int A[], int n);
void xuat(int A[], int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	xoaTatCaSoTrungNhau(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void xoa1GT(int A[], int &n, int i)
{
	for(int j=i; j<n; j++)
		A[j]=A[j+1];
	n--;
}
void xoaTatCaSoTrungNhau(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1;  j<n; j++)
		{
			if(A[i]==A[j])
			{
				xoa1GT(A,n,i);
				i--;
			}
		}
	}
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)	
		if(A[i]>0)
			cout<<A[i]<<" ";
}
