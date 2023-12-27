#include<iostream>
using namespace std;
void nhap(float A[], int &n, float &x);
float giaTriAmCuoiCungLonHonX(float A[], int n, float x);
void xuat(float kq);
int main()
{
	float A[100],x;
	int n;
	nhap(A,n,x);
	float kq= giaTriAmCuoiCungLonHonX(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n, float &x)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap X: ";
	cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float giaTriAmCuoiCungLonHonX(float A[], int n, float x)
{
	
	for(int i=n-1; i>=0; i--)
		if(A[i]<0 && A[i]>x)
		{
			return A[i];
			break;
		}
	return 0;
}
void xuat(float kq)
{
	cout<<kq;
}
