#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int ViTriMax(int A[], int n);
int ViTriMin(int A[], int n);
void doiCho(int &x, int &y);
void doichoMinMax (int A[], int n);
void xuatmang(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	doichoMinMax(A,n);
	xuatmang(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int ViTriMax(int A[], int n)
{
	int vt=0;
	for(int i=1; i<n; i++)
		if(A[vt]<A[i])
			vt=i;
	return vt;
}
int ViTriMin(int A[], int n)
{
	int vt=0;
	for(int i=1; i<n; i++)
		if(A[vt]>A[i])
			vt=i;
	return vt;
}
void doiCho(int &x, int &y)
{
	int t=x;
	x=y;
	y=t;
}
void doichoMinMax (int A[], int n)
{
	int min=ViTriMin(A,n);
	int max=ViTriMax(A,n);
	doicho(A[min],A[max]);
}
void xuatmang(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
