#include<iostream>
using namespace std;
void nhap(float A[], int &n);
float timGTMax(float A[], int n);
void xoa1GT(float A[], int &n, int i);
void xoaTatCaMax(float A[], int n);
void xuat(float A[], int n);
int main()
{
	float A[10000];
	int n;
	nhap(A,n);
	xoaTatCaMax(A,n);
	xuat(A,n);
	return 0;
}
void nhap(float A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float timGTMax(float A[], int n)
{
	float max=A[0];
	for(int i=1; i<n; i++)
		if(A[i]>max)
			max=A[i];	
	return max;
}
void xoa1GT(float A[], int &n, int i)
{
	for(int j=i; j<n; j++)
		A[j]=A[j+1];
	n--;
}
void xoaTatCaMax(float A[], int n)
{
	float max=timGTMax(A,n);
	for(int i=0; i<n; i++)
	{
		if(A[i]==max)
		{
			xoa1GT(A,n,i);
			i--;
		}
	}
}
void xuat(float A[], int n)
{
	for(int i=0; i<n; i++)	
		if(A[i]>0)
			cout<<A[i]<<" ";
}
