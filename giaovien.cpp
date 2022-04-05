#include<iostream.h>
using namespace std;
class GV{
	private:
		char ht[30];
		int tuoi;
		char bc[15];
		char Cnganh[20];
		float bl, lcb;
	public:
		void Nhap(){
			cin.ignore();
			cout <<"Nhap ho ten: ";
			cin.getline(ht, 30);
			cout <<"Nhap tuoi: ";
			cin >> tuoi;
			cin.ignore();
			cout <<"Nhap bang cap: ";
			cin.getline(bc, 15);
			cout <<"Nhap chuyen nganh: ";
			cin.getline(Cnganh, 15);
			cout <<"Nhap bac luong: ";
			cin >> bl;
		}
		float Tinhtienluong(){
			return lcb = bl * 610;
		}
		void Xuat(){
			cout <<"+========"<<  ht  <<"======="
				 <<"======="<<tuoi
				 <<"==========="<<bc
				 <<"==========="<<Cnganh
				 <<"=========="<<bl
				 <<"=========="<<Tinhtienluong()<<"====+"<<endl;
		}	
	
	char * getcNganh(){
			return Cnganh;
		}	
};
void BangTT(){
	cout <<"+======"<<"HO TEN"
		 <<"========"<<"TUOI"
		 <<"========"<<"BANG CAP"
		 <<"========"<<"CHUYEN NGANH"
		 <<"========"<<"BAC LUONG"
		 <<"========"<<"LUONG CB"<<"=====+"<<endl;
}
int main()
{
	int n;
	cout <<"\tNhap so giao vien: ";cin >> n;
	GV a[n];
	for(int i = 0; i < n; i++){
		a[i].Nhap();
	}
	cout <<"\tDANH SACH GIAO VIEN"<<endl;
	BangTT();
	for(int i = 0; i < n; i++){
		a[i].Xuat();
	}
	cout <<"\tNHUNG GIAO VIEN CO LUONG DUOI 2000\n";
	BangTT();
	for(int i = 0; i < n; i++){
		if( a[i].Tinhtienluong() < 2000){
			a[i].Xuat();
		}else{
			cout <<"Khong co gv nao luong duoi 2000\n";
			break;
		}
	}
	cout <<"\tDANH SACH GIAO VIEN SAP XEP THEO CHUYEN NGANH\n";
	BangTT();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmpi(a[i].getcNganh(), a[j].getcNganh()) > 0){
				swap(a[i], a[j]);	
			}
		}
		a[i].Xuat();
	}
	cout <<endl;
	       return 0;}