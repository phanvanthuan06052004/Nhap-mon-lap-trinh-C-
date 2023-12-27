#include<iostream>
using namespace std;
void nhap(int &n);
int soDauTienFibonacci(int n);
int main()
{
	int n;
	nhap(n);
	soDauTienFibonacci(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int soDauTienFibonacci(int n)
{
	int a0=1; 
	int a1=1;
	int an=a0+a1;
	for(int i=1; i<=n; i++)
	{
		cout<<a0<<" ";
		a0=a1;
		a1=an;
		an=a0+a1;
	}
}
