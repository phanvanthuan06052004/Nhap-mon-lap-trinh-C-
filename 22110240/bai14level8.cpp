#include<iostream>
using namespace std;
void nhap(float A[], int &n);
float soNhoNhat(float A[], int n);
float soLonNhat(float A[], int n);
int lamtronMin(float b);
int lamtronMax(float a);
float timDoanAB(float A[], int n, int &min, int &max);
void xuat(int min, int max);
int main()
{
	float A[100];
	int n,min, max;
	nhap(A,n);
	timDoanAB(A,n,min,max);
	xuat(min,max);
	return 0;
}
void nhap(float A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
float soNhoNhat(float A[], int n)
{
	float min=A[0];
	for(int i=0; i<n; i++)
		if(A[i]<min)
			min=A[i];
	return min;
}
float soLonNhat(float A[], int n)
{
	float max=0;
	for(int i=0; i<n; i++)
		if(A[i]>max)
			max=A[i];
	return max;
}
int lamtronMin(float b)
{
	int d;
	d=(int)b;
	if(b>0)
		return d;
	else
		if( (d-b)!= 0)
			return d-1;
}
int lamtronMax(float a)
{
	int d;
	d=(int)a;
	if(a>0)
	{
		if((a-d)>=0.5 && (a-d)<1.0)
			return d+1;
		else
			if((a-d)>=0 && (a-d)<0.5)
				return d;
	}
	else
		if(a<0)
			return d;
}
float timDoanAB(float A[], int n, int &min, int &max)
{
	float b=soNhoNhat(A,n);
	float a=soLonNhat(A,n);
	min=lamtronMin(b);
	max=lamtronMax(a);
}
void xuat(int min, int max)
{
	cout<<"["<<min<<", "<<max<<"]";
}
