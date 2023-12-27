#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &x);
int timViTriCanChen(int A[], int n, int x, int &vt);
void themPhanTuKhongThayDoiThuTu(int A[], int &n, int vt, int x);
void xuatmang(int A[], int n);
int main()
{
	int A[100],n,vt,x;
	nhap(A,n,x);
	timViTriCanChen(A,n,x,vt);
	themPhanTuKhongThayDoiThuTu(A,n,vt,x);
	xuatmang(A,n);
	return 0;
}
void nhap(int A[], int &n, int &x)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int timViTriCanChen(int A[], int n, int x, int &vt)
{
	if(x<A[0])
		vt=0;	
	if(x>A[n-1])
		vt=n;
	for(int i=0; i<n; i++)
		if(A[i]>x)
			vt=i;
	return vt;
}
void themPhanTuKhongThayDoiThuTu(int A[], int &n, int vt, int x)
{
	for(int i=n-1; i>=vt; i--)
		A[i+1]=A[i];
	A[vt]=x;
	n++;
}
void xuatmang(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
} 
