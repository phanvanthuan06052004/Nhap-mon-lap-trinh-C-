#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
int tinhtong(int A[100][100], int m, int n);
void xuat(int kq);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tinhtong(A,m,n);
	xuat(kq);
	return 0;
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
int tinhtong(int A[100][100], int m, int n)
{
	int t=0;
	for(int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			t=t+A[i][j];
	return t;			
}
void xuat(int kq)
{
	cout<<kq;
}
