#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n);
void timViTriMax(int A[100][100], int m, int n);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	timViTriMax(A,m,n);
	return 0;
}
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n;j++)
			cin>>A[i][j];
}
void timViTriMax(int A[100][100], int m, int n)
{
	int hang,cot;
	int max=A[0][0];
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
			if(max<A[i][j])
			{
				max=A[i][j];
				hang=i;
				cot=j;
			}
	}		
	cout<<"hang: "<<hang+1<<" "<<"cot: "<<cot+1;
}

