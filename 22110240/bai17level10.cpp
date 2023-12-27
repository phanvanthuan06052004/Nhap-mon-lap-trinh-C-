#include<iostream>
#define size 100
using namespace std;
void nhap(int A[][size], int m, int n);
bool lonNhatLenTrai(int A[][size], int x, int y);
bool lonNhatLenPhai(int A[][size], int n, int x, int y);
bool lonNhatXuongTrai(int A[][size], int m, int x, int y);
bool lonNhatXuongPhai(int A[][size], int m, int n, int x, int y);
bool lonNhatCot(int A[][size], int m, int x, int y);
bool lonNhatDong(int A[][size],int n, int x, int y);
bool laHoangHau(int A[][size], int m, int n, int x,int y);
int soLuongHoangHau(int A[][size], int m,int n);
void xuat(int kq);
int main()
{
	int A[size][size],m,n;
	nhap(A,m,n);
	int kq=soLuongHoangHau(A,m,n);
	xuat(kq);
}
void nhap(int A[][size], int m, int n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0;j<n; j++)
			cin>>A[i][j];
}
bool lonNhatLenTrai(int A[][size], int x, int y)
{
	int i=x-1;
	int j=y-1;
	while(i>=0 && j>=0)
	{
		if(A[i][j]>A[x][y])
			return false;
		i--;
		j--;
	}
	return true;
}
bool lonNhatLenPhai(int A[][size], int n, int x, int y)
{
	int i=x-1;
	int j=y+1;
	while(i>=0 && j<n)
	{
		if(A[i][j]>A[x][y])
			return false;
		i--;
		j++;
	}
	return true;
}
bool lonNhatXuongTrai(int A[][size], int m, int x, int y)
{
	int i=x+1;
	int j=y-1;
	while(i<m && j>=0)
	{
		if(A[i][j]>A[x][y])
			return false;
		i++;
		j--;
	}
	return true;
}
bool lonNhatXuongPhai(int A[][size], int m, int n, int x, int y)
{
	int i=x+1;
	int j=y+1;
	while(i<m && j<n)
	{
		if(A[i][j]>A[x][y])
			return false;
		i++;
		j++;
	}
	return true;
}
bool lonNhatCot(int A[][size], int m, int x, int y)
{
	for(int i=0; i<m; i++)
		if(A[i][y]>A[x][y])
			return false;
	return true;
}
bool lonNhatDong(int A[][size],int n, int x, int y)
{
	for(int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool laHoangHau(int A[][size], int m, int n, int x, int y)
{
	if(lonNhatDong(A,n,x,y) && lonNhatCot(A,m,x,y) && lonNhatXuongTrai(A,m,x,y) && lonNhatXuongPhai(A,m,n,x,y) && lonNhatLenPhai(A,n,x,y) && lonNhatLenTrai(A,x,y))
		return true;
	return false;
}
int soLuongHoangHau(int A[][size], int m,int n)
{
	int dem=0;
	for(int i=0; i<n;i++)
		for(int j=0; j<n; j++)
			if(laHoangHau(A,m,n,i,j))
				dem++;
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}
