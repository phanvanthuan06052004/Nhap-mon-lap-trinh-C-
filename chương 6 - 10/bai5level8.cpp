#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool ktrDangSong(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrDangSong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool ktrDangSong(int A[], int n)
{
	for(int i=1; i<n-1; i++)
	{
		if( (A[i]==A[i+1]) || (A[i]==A[i-1]) || ((A[i]>A[i-1]) && (A[i]<A[i+1])) || ((A[i]<A[i-1]) && (A[i]>A[i+1])))
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
		cout<<"co dang song";
	else
		cout<<"khong co khong co dang song";
}
