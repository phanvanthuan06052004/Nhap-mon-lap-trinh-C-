#include<iostream>
using namespace std;
void nhap(int &n);
int vietChu(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq= vietChu(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
int vietChu(int n)
{
	if(n==0)
		return 0;
	else
		if(n==1)
			return 1;
		else
			if(n==2)
				return 2;
			else
				if(n==3)
					return 3;
				else
					if(n==4)
						return 4;
					else
						if(n==5)
							return 5;
						else
							if(n==6)
								return 6; 
							else
								if(n==7)
									return 7;
								else
									if(n==8)
										return 8;
									else		
										if(n==9)
											return 9;
										else
											return 10;
}
void xuat(int kq)
{
	if(kq==0)
		cout<<"Khong";
	else
		if(kq==1)
			cout<<"Mot";
		else
			if(kq==2)
				cout<<"Hai";
			else
				if(kq==3)
					cout<<"Ba";
				else
					if(kq==4)
						cout<<"Bon";
					else
						if(kq==5)
							cout<<"Nam";
						else
							if(kq==6)
								cout<<"Sau"; 
							else
								if(kq==7)
									cout<<"Bay";
								else
									if(kq==8)
										cout<<"Tam";
									else		
										if(kq==9)
											cout<<"Chin";
										else
											cout<<"Khong biet viet";
}
