#include<iostream>
using namespace std;
void nhap(int &n);
int timSoLonNhat(int n);
void xuat(int max);
int main()
{
	int n;
	nhap(n);
	int max=timSoLonNhat(n);
	xuat(max);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int timSoLonNhat(int n)
{
	int max=0;
	while(n!=0)
	{
		int x=n%10;
		n=n/10;
		if(x>max)
			max=x;
	}
	return max;
}
void xuat(int max)
{
	cout<<"chu so lon nhat la: "<<max;
}
