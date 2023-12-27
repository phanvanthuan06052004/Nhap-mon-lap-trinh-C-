#include<iostream>
using namespace std;
void nhap(int A[], int &n);
bool laNT(int x);
int demSoNT(int A[], int n);
bool laHH(int x);
int demSoHH(int A[], int n);
bool ktrBangNhau(int A[], int n);
void xuat(int kq);	
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ktrBangNhau(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}

/* ham dem nguyen to */
bool laNT(int x)
{
	int t=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			t++;
	if(t==2)
		return true;
	else 
		return false;
}
int demSoNT(int A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		if(laNT(A[i])==true)
			dem++;
	return dem;
}
/*ham dem hoan hao*/
bool laHH(int x)
{
	int t=0;
	for(int i=1; i<x; i++)
		if(x%i==0)
			t=t+i;
	if(t==x)
		return true;
	else
		return false;	
}
int demSoHH(int A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		if(laHH(A[i])==true)
			dem++;
	return dem;
}
/*ham ktr*/
bool ktrBangNhau(int A[], int n)
{
	for(int i=0; i<n; i++)
		if(demsoNT(A)==demsoHHa(A))
			return true;
	else
		return false;
}

void xuat(int kq)
{
	if(kq==true)
		cout<<"bang";
	else
		cout<<"khong bang";
}
