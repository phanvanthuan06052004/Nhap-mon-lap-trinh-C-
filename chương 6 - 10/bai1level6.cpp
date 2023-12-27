#include<iostream>
using namespace std;
void nhapMang(int A[], int &n);
void xuatMang(int A[], int n);
int main()
{
	int n;
	int A[100];
	nhapMang(A,n);
	xuatMang(A,n);
}
void nhapMang(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void xuatMang(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
