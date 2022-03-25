#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
   	  while (!(cin)){
			  cin.clear();
			  cin.ignore(numeric_limits<streamsize>::max(), '\n');
			  cout << "Nhap lai n = ";
			  cin>>n;
			  }
    for(int i = 1; i <= n; i++) {
        
        for(int j = i; j <= n; j++) {
            cout << " * ";
        }
 
        cout << endl;
    }
    return 0;
}