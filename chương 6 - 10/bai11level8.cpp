#include<iostream>
using namespace std;
void nhap(int A[], int &n);
int GiaTriChanMin(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=GiaTriChanMin(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int GiaTriChanMin(int A[], int n)
{
	int min=A[0];
	for(int i=0; i<n; i++)
		if(A[i]%2==0 && A[i]<min)
			min=A[i];
	return min;
}
void xuat(int kq)
{
	if(kq%2==0)
		cout<<kq;
	else
		cout<<-1;
}
