
#include<iostream>
#include<limits>

using namespace std;
int main ()
{   int n;
    do
{
	cout<<"nhap so tuoi cua hoc sinh : ";
	cin>>n;
	while(!(cin))
	{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"nhap lai tuoi cua hoc sinh : ";
	cin>>n;
    }
}
  while(n<0);
if ( n == 16)
{
	cout<<"hoc sinh lop 10"<<endl;
}
else if (n == 17 )
{
	cout<<"hoc sinh lop 11"<<endl;
}
else if (n == 18 )
{
	cout<<"hoc sinh lop 12"<<endl;
}
else
{
	cout<<"chua du tuoi"<<endl;
}
return 0;
}
