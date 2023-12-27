#include<iostream>
using namespace std;
void nhap(float A[], float B[], int &n, int &x);
void xuatmang(float A[], float B[], int n, int x );
int main()
{
	float A[100],B[100];
	int n,x;
	nhap(A,B,n,x);
	xuatmang(A,B,n,x);
	return 0;
}
void nhap(float A[], float B[], int &n, int &x)
{
	cin>>n;
	cin>>x;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int j=0; j<x; j++)
		cin>>B[j];
}
void xuatmang(float A[], float B[], int n, int x )
{
	int j,i;
	int dem=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
			if(A[i]==B[j])
				break;
		if(j>=x)
		{
			cout<<A[i]<<" ";
			dem++;
		}
	}
	if(dem==0)
		cout<<"tat ca deu giong nhau";
}
