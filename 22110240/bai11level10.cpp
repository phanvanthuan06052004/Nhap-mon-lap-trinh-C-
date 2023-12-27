#include<iostream>
using namespace std;
void nhap(int A[100][100],int B[100][100], int &m, int &n);
void tinhTongMaTran(int A[100][100],int B[100][100],int C[100][100], int m, int n);
void xuat(int C[100][100], int m, int n);
int main()
{
	int A[100][100],B[100][100],C[100][100];
	int m,n;
	nhap(A,B,m,n);
	tinhTongMaTran(A,B,C,m,n);
	xuat(C,m,n);
	return 0;
}
void nhap(int A[100][100],int B[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>B[i][j];
}
void tinhTongMaTran(int A[100][100],int B[100][100],int C[100][100], int m, int n)
{
	for(int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			C[i][j]=A[i][j]+B[i][j];			
}
void xuat(int C[100][100], int m, int n)
{
	for(int i=0;i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<C[i][j]<<" ";
		cout<<endl;
	}
}
