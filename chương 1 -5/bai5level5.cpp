#include<iostream>
using namespace std;
void nhap(int &n);
bool soHoanHao(int n);
void LietKeSoHH(int n);
void xuat(int i);
int main()
{
	int n;
	nhap (n);
	LietKeSoHH(n);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap vao so: ";
	cin>>n;
}
bool soHoanHao(int n)
{
	int i, s=0;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		return true;
	else
		return false;
			
}
void LietKeSoHH(int n)
{
	for(int i=1; i<=n; i++)
		if(soHoanHao(i)==true)
			xuat(i);
}
void xuat(int i)
{
	cout<<i<<" ";
}	
