
#include<iostream>

using namespace std;
int main ()
{
	int n, hoadon;
	do
	{	
	cout<<"nhap so KW dien tieu thu : ";
	cin>>n;
    }
    while(n<=0);
	if (n>0 && n<=100)
	{   hoadon = n*5000;
		cout<<"tien dien phai thanh toan la : "<<hoadon<<" dong"<<endl;
	}
	else if (n>=101 && n<=200 )
	{
		hoadon = (100*5000)+(n-100)*8500;
		cout<<"tien dien phai thanh toan la : "<<hoadon<<" dong"<<endl;
	}
	else if (n>=201 && n<=300 )
	{
		hoadon = (100*5000)+(n-100)*8500+(n-201)*10000;
		cout<<"tien dien phai thanh toan la : "<<hoadon<<" dong"<<endl;
	}
	else 
	{
		hoadon = (100*5000)+(n-100)*8500+(n-201)*10000+(n-300)*50000;
		cout<<"tien dien phai thanh toan la : "<<hoadon<<" dong"<<endl;
	}
	if (hoadon>5000 && hoadon<=50000)
	{
		cout<<"hoa don it";
	}
	else if (hoadon>50000 && hoadon<=500000)
	{
		cout<<"hoa don trung binh";
	}
	else 
	{
		cout<<"hoa don nhieu";
	}
return 0;
}