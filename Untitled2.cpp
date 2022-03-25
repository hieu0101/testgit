
#include<iostream>
using namespace std;
int main ()
{   
float a,b,c,d,e,f,g,h,dtb;
 cout<<"nhap mon toan : ";
 cin>>a;
 cout<<"nhap mon ly : ";
 cin>>b;
 cout<<"nhap mon anh : ";
 cin>>c;
 cout<<"nhap mon hoa : ";
 cin>>d;
 cout<<"nhap mon lap trinh : ";
 cin>>e;
 cout<<"nhap mon ngon ngu nhat : ";
 cin>>f;
 cout<<"nhap mon the chat : ";
 cin>>g;
 cout<<"nhap mon ngon ngu phap : ";
 cin>>h;
 dtb=((a*4)+(b*4)+(c*4)+(d*3)+(e*4)+(f*2)+(g*2)+(h*3))/26;
 cout<<"diem trung binh = "<<dtb<<endl;
 if ( dtb>0 && dtb <=5)
 {
 	cout<<"Hoc luc kem "<<endl;
 }
 else if (dtb>5 && dtb<=7)
 {
 	cout<<"Hoc luc kha "<<endl;
 }
 else if (dtb>7 && dtb<=9)
 {
 	cout<<"Hoc luc gioi"<<endl;
 }
 else
 {
 	cout<<"Hoc luc xuat sac"<<endl;
 }
 return 0;
}