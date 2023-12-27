#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool ktrTonTai0LienTiep(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrTonTai0LienTiep(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool ktrTonTai0LienTiep(int A[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		if(A[i]==0 && A[i+1]==0)
		{
			return false;
			break;
		}
	}
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"khong ton tai gia tri 0 lien tiep";
	else
		cout<<"ton tai gia tri 0 lien tiepN";
}
