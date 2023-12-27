#include<iostream>
using namespace std;
void nhap(float A[], int &n, float &x, float &y);
void lietKeCacSoThucThuocDoan(float A[], int n, float x, float y);
int main()
{
	float A[100];
	int n;
	float x,y;
	nhap(A,n,x,y);
	lietKeCacSoThucThuocDoan(A,n,x,y);
	return 0;
}
void nhap(float A[], int &n, float &x, float &y)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	cout<<"nhap y: ";
	cin>>y;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void lietKeCacSoThucThuocDoan(float A[], int n, float x, float y)
{
	for(int i=0; i<n; i++)
		if(A[i]>=x && A[i]<=y)
			cout<<A[i]<<" ";
}
