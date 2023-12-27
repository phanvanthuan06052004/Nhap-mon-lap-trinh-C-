#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[], int &n);
void xuatMangLonHonTriTuyetDoi(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	xuatMangLonHonTriTuyetDoi(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void xuatMangLonHonTriTuyetDoi(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(A[i]>abs(A[i-1]))
			cout<<A[i]<<" ";
}
