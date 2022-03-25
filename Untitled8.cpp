
#include<iostream>
using namespace std;
int main ()
{
	int S1=0 , S2=0 ,n,S3=0;
	do{
	cout<<"nhap n : ";
	cin>>n;
      }
while (n<0);
for(int i=1;i<=n;i++){
if(n%i==0){
if(i%2==0)
	S1 += i;
else 
    S2 += i;
}
}
cout<<"tong cac uoc so chan = "<<S1<<endl;
cout<<"tong cac uoc so le   = "<<S2<<endl;
for (int j=1;j<n;j++){
	if(n%j==0)
	S3+=j;
}
if (S3 == n)
{
	cout<<n<<" la so hoan hao";
}   
else 
{
	cout<<n<<" ko phai la so hoan hao";
}
	
return 0;
}


