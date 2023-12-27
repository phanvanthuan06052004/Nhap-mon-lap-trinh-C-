#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool laSoHT(int n);
int timSoHoanThienNhoNhat(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=timSoHoanThienNhoNhat(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
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
int timSoHoanThienNhoNhat(int A[], int n)
{
	int min=A[0];
	for(int i=0; i<n; i++)
	{
		if(laSoHT(A[i])==true)
		{
			min=A[i];
			break;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(laSoHT(A[i])==true && A[i]<min)
		{
			min=A[i];
			break;
		}
	}
	return min;
}
void xuat(int kq)
{
	cout<<kq;
}
