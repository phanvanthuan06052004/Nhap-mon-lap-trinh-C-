#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int SoHoanThienCuoiCung(int A[], int n);
bool laSoHT(int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=SoHoanThienCuoiCung(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int SoHoanThienCuoiCung(int A[], int n)
{
	for(int i=n-1; i>=0; i--)
		if(laSoHT(A[i])==true)
		 return A[i];
	return 0;
}
bool laSoHT(int n)
{
	int s=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		return true;
	else
		return false;
}
void xuat(int kq)
{
	cout<<kq;
}
