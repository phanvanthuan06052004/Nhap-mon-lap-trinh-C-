#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
void viTriSoNguyenToDauTien(int A[100][100], int m, int n);
bool laSoNT(int A[100][100]);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	viTriSoNguyenToDauTien(A,m,n);
	return 0;
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
void viTriSoNguyenToDauTien(int A[100][100], int m, int n)
{
	int hang,cot;
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			if(lasoNT(A[i][j])==true)
			{
				hang=i;
				cot=j;
				break;
			}
		}
	}		
	cout<<"hang: "<<hang+1<<" "<<"cot: "<<cot+1;
}
bool laSoNT(int A[100][100])
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	else
		return false;
}
