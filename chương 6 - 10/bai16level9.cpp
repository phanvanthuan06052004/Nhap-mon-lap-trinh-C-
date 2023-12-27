#include<iostream>
using namespace std;
void nhap(int A[], int n);
void sapXepChanVeDau(int A[], int vtSoDoi);
void duaPT0VaoGiua(int A[], int vtSoDoi, int vtSoChanCuoi);
void sapXepChanDauVaLeCuoi(int A[], int n);
void xuat(int A[], int n);
int main()
{
	int A[1000],n;
	nhap(A,n);
	sapXepChanDauVaLeCuoi(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
void sapXepChanVeDau(int A[], int vtSoDoi)
{
	int co=A[vtSoDoi];
	for(int i=vtSoDoi; i>0; i--)
	{
		A[i]=A[i-1];
	}
	A[0]=co;
}
void duaPT0VaoGiua(int A[], int vtSoDoi, int vtSoChanCuoi)
{
	for(int i=vtSoDoi; i>vtSoChanCuoi; i--)
	{
		A[i]=A[i-1];
	}
	A[vtSoChanCuoi]=0;
}
void sapXepChanDauVaLeCuoi(int A[], int n)
{
	int dem, vtSoChanCuoi=0;
	for(int i=0; i<n; i++)
		if(A[i]%2==0 && A[i]!=0)
				sapXepChanVeDau(A,i);				
	for(int i=0; i<n; i++)
	{
		if(A[i]%2!=0)
		{
			vtSoChanCuoi=i;
			break;
		}
	}
	for(int i=0; i<n; i++)	
		if(A[i]==0)
			duaPT0VaoGiua(A,i,vtSoChanCuoi);
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)
		cout<<A[i];
}
