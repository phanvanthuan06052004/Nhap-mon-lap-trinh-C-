#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int timMax(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=timMax(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int timMax(int A[], int n)
{
	int max=0;
	for(int i=0; i<n; i++)
		if(A[i]>max)
			max=A[i];
	return max;
}
void xuat(int kq)
{
	cout<<kq;
}
