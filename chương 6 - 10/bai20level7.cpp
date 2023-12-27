#include<iostream>
using namespace std;
void nhap(float A[], int &n);
bool ktrDoiXung(float A[], int n);
void xuat(int kq);
int main()
{
	float A[100];
	int n;
	nhap(A,n);
	bool kq=ktrDoiXung(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];	
}
bool ktrDoiXung(float A[], int n)
{
	for(int i=0; i<n/2; i++)
		if(A[i]!=A[n-i-1])
			return false;
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"doi xung";
	else
		cout<<"khong doi xung";
}
