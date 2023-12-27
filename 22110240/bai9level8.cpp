#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool laSoNT(int n);
int timSoNTLonNhat(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=timSoNTLonNhat(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
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
int timSoNTLonNhat(int A[], int n)
{
	int max=0;
	for(int i=0; i<n; i++)
		if(laSoNT(A[i])==true && A[i]>max)
			max=A[i];
	return max;
}
void xuat(int kq)
{
	cout<<kq;
}
