#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int dauledautien(int A[], int n);
bool ktrdaule(int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=dauledautien(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int dauledautien(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(ktrdaule(A[i])==true)
		{
			return A[i];
			break;
		}
	}
	return 0;
}
bool ktrdaule(int n)
{
	int x=0,m,dem=n;
	while(dem!=0)
	{
		m=dem%10;
		dem/=10;
		x=x*10+m;
	}
	if(x%2!=0)
		return true;
	else
		return false;
}
void xuat(int kq)
{
	cout<<kq;
}
