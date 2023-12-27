#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void chiaMang(int A[], int &B[], int &C[], int n, int &x, int &y);
void xuatMang(int B[], int C[], int n, int x, int y);
int main()
{
	int A[100],B[100],C[100],n,x=0,y=0;
	nhap(A,n);
	chiaMang(A,B,C,n,x,y);
	xuatMang(B,C,n,x,y);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void chiaMang(int A[], int &B[], int &C[], int n, int &x, int &y)
{
	for(int i=0; i<n; i++)
	{
		if(A[i]>=0)
		{
			B[x]=a[i];
			x++;
			cout<<B[x]<<" ";
		}
		else
			{
				C[y]=A[i];
				y++;
				cout<<C[y]<<"";
			}
}
void xuatMang(int B[], int C[], int n, int x, int y)
{
	for(int i=0; i<x; i++)
		cout<<B[i]<<" ";
	for(int j=0; j<y; j++)
		cout<<C[i]<<" ";
}
