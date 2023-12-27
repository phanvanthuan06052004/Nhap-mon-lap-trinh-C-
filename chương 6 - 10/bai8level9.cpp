#include<iostream>
using namespace std;
void nhap(int A[], int &n);
void lietKeTanSuat(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	lietKeTanSuat(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void lietKeTanSuat(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		int dem=0;
		for(int j=0; j<n; j++)
		{
			if(A[i]==A[j])
			{
				if(j<i)
					break;
				else
					dem++;
			}
		}
		if(dem!=0)
			cout<<"so "<<A[i]<<" xuat hien: "<<dem<<" lan; ";
	}
}
