#include<iostream>
using namespace std;
void nhap(int A[], int &n, int &x, int &y);
void lietKeCacSoChanThuocDoanXY(int A[], int n, int x, int y);
int main()
{
	int A[100];
	int n,x,y;
	nhap(A,n,x,y);
	lietKeCacSoChanThuocDoanXY(A,n,x,y);
	return 0;
}
void nhap(int A[], int &n, int &x, int &y)
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
void lietKeCacSoChanThuocDoanXY(int A[], int n, int x, int y)
{
	for(int i=0; i<n; i++)
		if(A[i]>=x && A[i]<=y && A[i]%2==0)
			cout<<A[i]<<" ";
}
