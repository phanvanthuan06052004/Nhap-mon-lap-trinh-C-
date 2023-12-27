#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int SoNguyenToCuoiCung(int A[], int n);
bool laSoNT(int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=SoNguyenToCuoiCung(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int SoNguyenToCuoiCung(int A[], int n)
{
	for(int i=n-1; i>=0; i--)
		if(laSoNT(A[i])==true)
		 return A[i];
	return -1;
}
bool laSoNT(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	else
		return false;
}
void xuat(int kq)
{
	cout<<kq;
}
