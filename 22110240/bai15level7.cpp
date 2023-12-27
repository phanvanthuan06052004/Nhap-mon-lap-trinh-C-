#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int capSoCong(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=capSoCong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int capSoCong(int A[], int n)
{
	int d=A[1]-A[0];
	int x=1;
	for(int i=2; i<n-1; i++)
	{
		if(A[i+1]-A[i]!=d)
		{
			x=0;
			break;
		}
	}
	return x;	
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"la Cap So Cong";
	else
		cout<<"Khong La Cap So Cong";
}
	

