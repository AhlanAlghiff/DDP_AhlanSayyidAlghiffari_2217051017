#include <iostream>
#include <string>

using namespace std;

//ahlansayyidalghiffari_2217051017
int main(){
	string nama, tanggal, bulan, tahun;
	int npm;
	
	getline(cin, nama);
	cin >> npm;
	cin >> tanggal >> bulan >> tahun;
	
	cout << "Nama :" << nama << endl;
	cout << "NPM :" << npm << endl;
	cout << "TTL  :" <<  tahun << bulan << tanggal;
    return 0;
}
