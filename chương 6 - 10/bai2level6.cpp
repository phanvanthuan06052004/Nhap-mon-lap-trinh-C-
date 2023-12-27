#include<iostream>
using namespace std;
void nhapMang(float A[], float &n);
float tongMang(float A[], float n);
void xuat(float kq);
int main()
{
	float A[100],n;
	nhapMang(A,n);
	float kq=tongMang(A,n);
	xuat(kq);
	return 0;
}
void nhapMang(float A[], float &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float tongMang(float A[], float n)
{
	float s=0;
	for(int i=0; i<n; i++)
		s=s+A[i];
	return s;
}
void xuat(float kq)
{
	cout<<kq;
}
