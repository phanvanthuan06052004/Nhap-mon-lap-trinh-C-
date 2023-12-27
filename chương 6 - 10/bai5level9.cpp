#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void xuatLietKeLanCanTraiDau(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	xuatLietKeLanCanTraiDau(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void xuatLietKeLanCanTraiDau(int A[], int n)
{
	for(int i=0; i<n; i++)
		if( (A[i]*A[i+1]>0 && A[i]*A[i-1]<0) || (A[i]*A[i+1]<0 && A[i]*A[i-1]<0) || (A[i]*A[i+1]<0 && A[i]*A[i-1]>0) || A[i]*A[i+1]<0 || A[i]*A[i-1]<0)
			cout<<A[i]<<" ";
}

