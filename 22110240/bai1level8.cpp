#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool ktrTinhChatChanLe(int A[], int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrTinhChatChanLe(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
bool ktrTinhChatChanLe(int A[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		if((A[i]+A[i+1])%2==0)
		{
			return false;
			break;
		}
	}
	return true;
}
void xuat(int kq)
{
	if(kq==true)
		cout<<"co tinh chan le";
	else
		cout<<"khong co tinh chan le";
}
