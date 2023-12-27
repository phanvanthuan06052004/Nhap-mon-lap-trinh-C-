#include<iostream>
using namespace std;
void xuat(int i);
int timSoNguyen();
int main()
{
	timSoNguyen();
	return 0;
}

int timSoNguyen()
{
	for(int i=10; i<100; i++)
	{
		int dv=i%10;
		int chuc=i/10;
		if(dv*chuc == 2*(dv+chuc))
			xuat(i);
	}	
}
void xuat(int i)
{
	cout<<i<<" ";
}

