#include<iostream>
using namespace std;
void nhap(float A[], float &n);
float timSoAmLonNhat(float A[], float n);
void xuat(float kq);
int main()
{
	float A[100],n;
	nhap(A,n);
	float kq=timSoAmLonNhat(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], float &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float timSoAmLonNhat(float A[], float n)
{
	float max=0;
	for(int i=0; i<n; i++)
	{
		if(A[i]<0)
		{
			max=A[i];
			break;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(A[i]<0 && A[i]>max)
		{
			max=A[i];
			break;
		}
	}
	return max;
}
void xuat(float kq)
{
	cout<<kq;
}
