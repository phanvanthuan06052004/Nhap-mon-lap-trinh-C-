#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int timSoAmLonNhat(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=timSoAmLonNhat(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int timSoAmLonNhat(int A[], int n)
{
	int max=0;
	for(int i=0; i<n; i++)
	{
		if(A[i]<0)
		{
			max=A[i];
			break;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(A[i]<0 && A[i]>max)
		{
			max=A[i];
			break;
		}
	}
	return max;
}
void xuat(int kq)
{
	cout<<kq;
}
