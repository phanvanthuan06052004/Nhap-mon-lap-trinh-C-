#include<iostream>
using namespace std;
void nhap(int &n);
bool LaSoNT(int x);
void LietKeSoNT(int n);
void xuat(int x);
int main()
{
	int n;
	nhap (n);
	LietKeSoNT(n);
	return 0;
}
bool LaSoNT(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return true;
	else 
		return false;		 
}
void LietKeSoNT(int n)
{
	for(int i=1; i<n; i++)
		if(LaSoNT(i)==true)
			xuat(i);
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(int x)
{
	cout<<x<<" ";
}	
