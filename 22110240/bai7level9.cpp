#include<iostream>
using namespace std;
void nhap(float A[], int &n);
int demSoLuongGiaTriMax(float A[], int n);
void xuat(int kq);
int main()
{
	float A[100];
	int n;
	nhap(A,n);
	int kq=demSoLuongGiaTriMax(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int demSoLuongGiaTriMax(float A[], int n)
{
	int dem=0;
	float max=A[0];
	for(int i=0; i<n; i++)
	{
		if(A[i]==max)
			dem++;
		else
			if(A[i]>max)
			{
				max=A[i];
				dem=1;
			}
	}
	return dem;
		
}
void xuat(int kq)
{
	cout<<kq;
}
