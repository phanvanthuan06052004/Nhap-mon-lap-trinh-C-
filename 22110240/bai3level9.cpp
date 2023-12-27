#include<iostream>
using namespace std;
void nhapMang(float A[], float B[], int &n, int &m);
void xuatMang(float A[], float B[], int n, int m);
int main()
{
	float A[100], B[100];
	int m,n;
	nhapMang(A,B,n,m);
	xuatMang(A,B,n,m);
	return 0;
}
void nhapMang(float A[], float B[], int &n, int &m)
{
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int j=0; j<m; j++)
		cin>>B[j];
}
void xuatMang(float A[], float B[], int n, int m)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			if(A[i]==B[j])
				cout<<A[i]<<" ";
	}	
}
