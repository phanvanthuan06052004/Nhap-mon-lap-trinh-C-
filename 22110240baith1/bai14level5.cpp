#include<iostream>
using namespace std;
void nhap(int &n, int &k);
float toHop(int n, int k);
long long giaiThua(int s);
void xuat(int kq);
int main()
{
	int n,k;
	nhap(n,k);
	float kq=toHop(n,k);
	xuat(kq);
	return 0;
}
void nhap(int &n, int &k)
{
	cout<<"nhap k: ";
	cin>>k;
	cout<<"nhap n: ";
	cin>>n;
}
float toHop(int n, int k)
{
	int x=n-k;
	if(k<=n)
	{
		float kq=(float)giaiThua(n) / (giaiThua(k)*giaiThua(x));
		return kq;
	}
	else
		return 0;
}
long long giaiThua(int s)
{
	int gt=1;
	for(int i=1; i<=s; i++)
		gt=gt*i;
	return gt;
}
void xuat(int kq)
{
	if(kq==0)
		cout<<"sai dieu kien k<=n";
	else
		cout<<kq;
}
