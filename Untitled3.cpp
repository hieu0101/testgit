#include<iostream>
#include<limits>
#include<math.h>
using namespace std;
int main()
{   int n;
    int S1=0,S2=0,T9=1;
    float S3=0,S4=0,S5=0,S6=0,S8=0,S7=0;
	do
{
	cout<<"nhap n : ";
	cin>>n;
	while(!(cin))
	{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"nhap lai n : ";
	cin>>n;
    }
}
  while(n<0);
  for(int i=1; i<=n ; i++) 
  {
   S1 += i;  
   S2 += pow(i,2);     
   S3 += (float)1/i;
   S4 += (float)1/(2*i);
   S5 +=  1 + (float)1/(2*i+1);
   S6 += (float) 1/(i*(i+1));
   S7 += (float) i/(i+1);
   S8 += 1/2 + (float) (2*i+1)/(2*i+2);
   T9 = T9*i;
  }
  cout<<"S1 = "<<S1<<endl;
  cout<<"S2 = "<<S2<<endl;
  cout<<"S3 = "<<S3<<endl;
  cout<<"S4 = "<<S4<<endl;
  cout<<"S5 = "<<S5<<endl;
  cout<<"S6 = "<<S6<<endl;
  cout<<"S7 = "<<S7<<endl;
  cout<<"S8 = "<<S8<<endl;
  cout<<"T9 = "<<T9<<endl;
    return 0;
}