#include <iostream>

using namespace std;
int main()
{
//	float hargakotor, diskon, hargabersih;
	int hargakotor, diskon, hargabersih;
	
	cin >> hargakotor;
	diskon = hargakotor*10/100;
	hargabersih = hargakotor-diskon;
	
	cout << "Harga setelah diskon\t: " << hargabersih << endl;
	cout << "Diskon yang didapatkan\t: " << diskon << endl;
	
	return 0;
	
}

