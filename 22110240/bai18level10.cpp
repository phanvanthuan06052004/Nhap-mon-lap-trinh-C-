#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
bool nhoNhatCot(int A[100][100], int m, int x, int y);
bool lonNhatDong(int A[100][100],int n, int x, int y);
bool laYenNgua(int A[100][100], int m, int n, int x, int y);
int soLuongYenNgua(int A[100][100], int m,int n);
void xuat(int kq);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=soLuongYenNgua(A,m,n);
	xuat(kq);
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0;j<n; j++)
			cin>>A[i][j];
}
bool nhoNhatCot(int A[][100], int m, int x, int y)
{
	for(int i=0; i<m; i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}
bool lonNhatDong(int A[100][100],int n, int x, int y)
{
	for(int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool laYenNgua(int A[100][100], int m, int n, int x, int y)
{
	if(lonNhatDong(A,n,x,y) && nhoNhatCot(A,m,x,y))
		return true;
	return false;
}
int soLuongYenNgua(int A[100][100], int m,int n)
{
	int dem=0;
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			if(laYenNgua(A,m,n,i,j))
			{
				dem++;
			}
		}
	}
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}
