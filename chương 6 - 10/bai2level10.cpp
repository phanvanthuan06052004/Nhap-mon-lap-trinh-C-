#include<iostream>
#include<string.h>
const char x[]=
{
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H'
};
using namespace std;
void nhap(int &n, int &b);
void chuyenHe(int n, int b);
int main()
{
	int n,b;
	nhap(n,b);
	chuyenHe(n,b);
}
void nhap(int &n, int &b)
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap he chuyen: ";
	cin>>b;
}
void chuyenHe(int n, int b)
{
	char S[100];
	if(n==0)
	{
		cout<<"0";
	}
	else
		{
			int i=0;
			while(n)
			{
				int co=n%b;
				n=n/b;
				S[i++]=x[co];
			}
			S[i]='\0';
			strrev(S);
			puts(S);
		}
}
