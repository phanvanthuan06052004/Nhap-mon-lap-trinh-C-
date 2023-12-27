#include<iostream>
using namespace std;
void nhap(int A[][100], int &m, int &n, int &k);
bool kiemtraDongGiamDan(int A[][100], int m, int k );
void xuat(int kq);
int main()
{
	int A[100][100], m,n,k;
	nhap(A,m,n,k);
	bool kq=kiemtraDongGiamDan(A,m,k);
	xuat(kq);
	return 0;
}
void nhap(int A[100][100], int &m, int &n, int &k)
{
	cin>>m>>n>>k;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
bool kiemtraDongGiamDan(int A[100][100], int m, int k )
{
	for(int j=0; j<m; j++)
	{
		if(A[k][j]<A[k][j+1])
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
		cout<<"giam dan";
	else
		cout<<"khong giam dan";
}
