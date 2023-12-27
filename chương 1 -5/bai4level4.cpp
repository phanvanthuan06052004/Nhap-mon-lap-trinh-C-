#include<iostream>
using namespace std;
void nhap(int &n);
bool ktrSoDoiXung(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap (n);
	bool kq=ktrSoDoiXung(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool ktrSoDoiXung(int n)
{
	int Dao=0;
	int tam=n;
	while(n>0)
	{
		Dao=Dao*10 + n%10;
		n/=10;
	}
	if(Dao==tam)
		return true;
	else
		return false;	
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"la so doi xung";
	else
		cout<<"khong la so doi xung";
}
