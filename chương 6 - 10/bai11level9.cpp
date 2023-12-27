#include<iostream>
using namespace std;
void nhap(int A[], int B[], int &n, int &m);
int ktrMangACoNamTrongMangB(int A[], int B[], int n, int m);
void xuat(int kq);
int main()
{
	int A[100],B[100],n,m;
	nhap(A,B,n,m);
	int kq=ktrMangACoNamTrongMangB(A,B,n,m);
	xuat(kq);
	return 0;
}
void nhap(int A[], int B[], int &n, int &m)
{
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int j=0; j<m; j++)
		cin>>B[j];
}
int ktrMangACoNamTrongMangB(int A[], int B[], int n, int m)
{
	int co=0,dem=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m;j++)
		{
			if(A[i]==B[j])
				dem++;
		}
	}
	if(dem==n)
		co=1;
	return co;
}
void xuat(int kq)
{
	if(kq==1)
		cout<<"tat ca cac phan tu mang A deu nam trong mang B";
	else
		cout<<"tat ca cac phan tu mang A khong nam trong mang B";
}

