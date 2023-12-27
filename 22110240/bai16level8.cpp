#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &vt, int &x);
void them1PhanTu(int A[], int &n, int vt, int x);
void xuatmang(int A[], int n);
int main()
{
	int A[100],n,vt,x;
	nhap(A,n,vt,x);
	them1PhanTu(A,n,vt,x);
	xuatmang(A,n);
	return 0;
}
void nhap(int A[], int &n, int &vt, int &x)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap vi tri chen: ";
	cin>>vt;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void them1PhanTu(int A[], int &n, int vt, int x)
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
