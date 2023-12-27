#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[], int &n);
bool lasoChinhPhuong(int n);
int ktrToanSoChinhPhuong(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	bool kq=ktrToanSoChinhPhuong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool lasoChinhPhuong(int n)
{
	float d=sqrt(n);
	if((int)d==d)
		return true;
	else
		return false;
}
int ktrToanSoChinhPhuong(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(lasoChinhPhuong(A[i])==false)
		{
			return 0;
			break;
		}
	return 1;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"Toan So Chinh Phuong";
	else
		cout<<"Khong Toan So Chinh Phuong";
}
	

