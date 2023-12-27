#include<iostream>
using namespace std;
void nhap(int A[][100], int &m, int &n);
void sapXepTang(int A[][100], int m, int n);
void xuat(int A[][100], int m , int n);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	sapXepTang(A,m,n);
	xuat(A,m,n);
	return 0;
}
void nhap(int A[][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
void sapXepTang(int A[][100], int m, int n)
{
	int tongPT=m*n;
	for(int i=0; i<tongPT-1; i++)
	{
		for(int j=i+1; j<tongPT; j++)
		{
			if(A[i/n][i%n] > A[j/n][j%n])
			{
				int tam=A[i/n][i%n];
				A[i/n][i%n]=A[j/n][j%n];
				A[j/n][j%n]=tam;
			}
		}
	}
}
void xuat(int A[][100], int m , int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}	
}
