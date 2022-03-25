#include<iostream>

using namespace std;
int main()
{
	int thu;
	cout<<"==>Nhap thu: ";
	cin>>thu;
	switch (thu)
	{
		case 2:
			cout<<"==>Monday ";break;
		case 3:
			cout<<"==>Tuesday ";break;		
		case 4:
			cout<<"==>Wednesday ";break;
		case 5:
			cout<<"==>Thursday ";break;
		case 6:
			cout<<"==>Friday ";break;
		case 7:
			cout<<"==>Saturday ";break;
		case 8:
			cout<<"==>Sunday ";break;
		default:
			cout<<"nhap thu ko hop le ! vui long nhap lai";
	}
	return 0;
}