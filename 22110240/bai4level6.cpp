#include<iostream>
using namespace std;
void nhap(int A[], int &n);
float TBCongChiaHetCho5(int A[], int n);
void xuat(float kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=TBCongChiaHetCho5(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float TBCongChiaHetCho5(int A[], int n)
{
	int s=0, dem=0;
	for(int i=0; i<n; i++)
		if(A[i]%5==0)
		{
			s=s+A[i];
			dem=dem+1;
		}
	return (float)s/dem;
}
void xuat(float kq)
{
	cout<<"ket qua la: "<<kq;
}
