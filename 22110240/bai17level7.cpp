#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool laHH(int n);
int ktrToanSoHH(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrToanSoHH(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool laHH(int n)
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
int ktrToanSoHH(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(laHH(A[i])==false)
		{
			return 0;
			break;
		}
	return 1;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"Toan So HH";
	else
		cout<<"Khong Toan So HH";
}
	

