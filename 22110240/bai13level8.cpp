#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int UCLN(int x, int y);
int uocChungLonNhat(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=uocChungLonNhat(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int UCLN(int x, int y)
{
	if(x==0 || y==0)
		return (x+y);
	else
		while(x!=y)
	  	{
	  		if(x>y)
				x=x-y;
	   		else
	        	y=y-x;
	  	}
	return x;
}
int uocChungLonNhat(int A[], int n)
{
	int t;
	if(n==1)
		return A[0];
	else
	{
		t=A[0];
		for(int i=0; i<n; i++)
			t=UCLN(t,A[i]);
	}
	return t;
}
void xuat(int kq)
{
	cout<<kq;
}
