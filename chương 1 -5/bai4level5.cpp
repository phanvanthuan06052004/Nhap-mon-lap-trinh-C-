#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
bool check(int n);
void LietKeSoCP(int n);
void xuat(int i);
int main()
{
	int n;
	nhap (n);
	LietKeSoCP(n);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap n: ";
	cin>>n;
}
bool check(int n)
{
	int tem=(sqrt)(n);
	if(tem*tem==n)
		return true;
	return false;
}
void LietKeSoCP(int n)
{
	for(int i=1; i<n; i++)
		if(check(i)==true)
			xuat(i);
}
void xuat(int i)
{
	cout<<i<<" ";
}
