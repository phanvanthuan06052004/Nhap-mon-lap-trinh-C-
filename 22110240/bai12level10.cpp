#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
void tinhTongDongCotCheo(int A[100][100], int m, int n);
void tinhtongDong(int A[100][100],int m, int n);
void tinhtongCot(int A[100][100], int m, int n);

int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	tinhTongDongCotCheo(A,m,n);
	tinhtongDong(A,m,n);
	tinhtongCot(A,m,n);
	return 0;
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
void tinhTongDongCotCheo(int A[100][100], int m, int n)
{
	int tongCheoChinh=0;
	int tongCheoPhu=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(i==j)
				tongCheoChinh+=A[i][i];
			if(i+j==m-1)
				tongCheoPhu+=A[i][j];
		}
	cout<<"tong cheo chinh la: "<<tongCheoChinh;
	cout<<endl;
	cout<<"tong cheo phu la: "<<tongCheoPhu;
	cout<<endl;
}
void tinhtongDong(int A[100][100],int m, int n)
{
	for(int i=0; i<m; i++)
	{
		int s=0;
		for(int j=0; j<n; j++)
			s=s+A[i][j];
		cout<<"dong thu "<<i<<" co tong la: "<<s;
		cout<<endl;
	}
}
void tinhtongCot(int A[100][100], int m, int n)
{
	for(int i=0; i<n; i++)
	{
		int s=0;
		for(int j=0; j<m;j++)
			s=s+A[j][i];
		cout<<"cot thu "<<i<<" co tong la: "<<s;
		cout<<endl;
	}
}



