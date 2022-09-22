#include <iostream>

//AhlanSayyidAlghiffari_2217051017
//22-September-2022
using namespace std;
int main()
{
	int angka;
	cin >> angka;
	
	switch (angka){
		default:
			cout << "Bilangan lebih besar dari tiga";
			break;
		case 1 : 
			cout << "satu \n";
			break;
		case 2 : 
			cout << "dua \n";
			break;
		case 3 :
			cout << "Tiga \n";
			break;
	}
	cin.get();
	return 0;
}

