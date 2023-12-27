#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &k);
void dichPhaiXoayVong(int A[],int n, int k);
void hoanvi(int &a, int &b);
void xuat(int A[], int n);
int main()
{
	int A[100],n,k;
	nhap(A,n,k);
	dichPhaiXoayVong(A,n,k);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n, int &k)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap k: ";
	cin>>k;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void dichPhaiXoayVong(int A[],int n, int k)
{
	while(k--)
	{
		int co=A[n-1];
		for(int i=n-1; i>0; i--)
			A[i]=A[i-1];
		A[0]=co;		
	}
}
void hoanvi(int &a, int &b)
{
	int t=a;
	a=b;
	b=t;
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i];
}
