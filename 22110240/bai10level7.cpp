#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool ktrSoDauChan( int n);
int lietKeSoDauChan(int A[], int n);

int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=lietKeSoDauChan(A,n);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool ktrSoDauChan( int n)
{
	int dv;
	while(n>=10)
	{
		dv=n%10;
		n=n/10;
	}
	if(n%2!=0)
		return false;
	return true;
}
int lietKeSoDauChan(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(ktrSoDauChan(A[i])==true)
			cout<<A[i]<<" ";
	}
}
	

