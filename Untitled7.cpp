#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,x;
	float T10=0,S11=0,S12=0,S13=0,S14=0,S15=0,S16=0,S17=0,S18=0,S19=0;
	cout<<"nhap n : ";
	cin>>n;
	cout<<"nhap x : ";
	cin>>x;
	T10 = pow(x,n);
	for(int i=1 ; i<=n ;i++)
	{
	S11 = S11 + i*(i+1);
	S12	= S12 + pow(x,i);
	S13 = S13 + pow(x,2*i);
	S14 = S14 + pow(x,2*i+1);
	S15 = S15 + (float)1/i;
	S16 = S16 + (float)pow(x,i)/(i+1);
	S17 = S17 + (float)pow(x,i)/i;
	S18 = S18 + 1 + (float)pow (x,2*i)/(i*2);
	S19 = S19 + 1 + x + (float) pow(x,2*i+1)/(2*i+1);
	}
	cout<<"T10 ="<<T10<<endl;
	cout<<"S11 ="<<S11<<endl;
	cout<<"S12 ="<<S12<<endl;
	cout<<"S13 ="<<S13<<endl;
	cout<<"S14 ="<<S14<<endl;
	cout<<"S15 ="<<S15<<endl;
	cout<<"S16 ="<<S16<<endl;
	cout<<"S17 ="<<S17<<endl;
	cout<<"S18 ="<<S18<<endl;
	cout<<"S19 ="<<S19<<endl;
	return 0;
}