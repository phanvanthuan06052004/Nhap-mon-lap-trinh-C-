#include<iostream>
using namespace std;
void nhap(int A[], int &nA, int B[], int &nB);
void ghepxenke(int A[], int nA, int B[], int nB, int C[], int &nC);
void xuat(int C[], int nC);
int main()
{
	int A[100],B[100],C[200];
	int nA,nB,nC;
	nhap(A,nA,B,nB);
	ghepxenke(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[], int &nA, int B[], int &nB)
{
	cout<<"nhap nA";
	cin>>nA;
	cin>>nB;
	for(int i=0; i<nA; i++)
		cin>>A[i];
	for(int j=0; j<nB; j++)
		cin>>B[j];
}
void ghepxenke(int A[], int nA, int B[], int nB, int C[], int &nC)
{
	int iA=0,iB=0;
	nC=0;
	while(iA<nA && iB<nB)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
		C[nC++]==A[iA++];
	while(iB<nB)
		C[nC++]=B[iB++];
}
void xuat(int C[], int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";	
}
