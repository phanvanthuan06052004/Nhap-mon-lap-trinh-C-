#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool ktrToanSoLe(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	bool kq=ktrToanSoLe(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool ktrToanSoLe(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(A[i]%2==0)
		{
			return false;
			break;
		}
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"Toan So Le";
	else
		cout<<"Khong Toan Le";
}
	

