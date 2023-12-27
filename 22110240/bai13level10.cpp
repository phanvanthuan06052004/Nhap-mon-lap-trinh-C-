#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
void sapXepTangDanDuongCheoChinh(int A[100][100], int m, int n);
void xuat(int A[100][100], int m,int n);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	sapXepTangDanDuongCheoChinh(A,m,n);
	xuat(A,m,n);
	return 0;
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
void sapXepTangDanDuongCheoChinh(int A[100][100], int m, int n)
{
	int tam;
	for(int i=0;i<m; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(A[i][i]>A[j][j])
			{
				tam=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=tam;
			}
		}
	}
}
void xuat(int A[100][100], int m,int n)
{
	for(int i=0;i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
