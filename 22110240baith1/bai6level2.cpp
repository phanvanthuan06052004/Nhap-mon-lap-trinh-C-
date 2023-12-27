#include<iostream>
using namespace std;
void nhap(float &a, float &b, float &c);
int xetamgiac(float a, float b, float c);
void xuat(int kq);
int main()
{
	float a,b,c;
	nhap(a,b,c);
	int kq = xetamgiac(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(float &a, float &b, float &c)
{
	cin>>a>>b>>c;
}
int xetamgiac(float a, float b, float c)
{
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	{
		if(a==b && b==c)
		   return 1;
		if(a==b || b==c || a==c)
			if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
				return 2;
			else 
				return 3;
		else
			if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		    	return 4;
			else 
		    	return 5;
	}
	else 
	    return 0;
}
void xuat(int kq)
{
	if(kq==0)
		cout<<"khong la tam giac";
	else
	    if(kq==1)
	       cout<<"tam giac deu";
	      else
		      if(kq==2)
			   cout<<"tam giac vuong can";
			    else
				   if(kq==3)
				   cout<<"tam giac can";
				     else
					    if(kq==4)
						 cout<<"tam giac vuong";
						   else 
						      cout<<"tam giac thuong"; 
	      
}
