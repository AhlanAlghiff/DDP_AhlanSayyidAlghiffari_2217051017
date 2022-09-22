#include <iostream>
using namespace std;
int main()
{
	//string panjang, lebar, tinggi;
	int panjang, lebar, tinggi;
	
	cin >> panjang;
	cin >> lebar;
	cin >> tinggi;
	
	cout << endl << endl;
	
	cout << 4*(panjang * lebar) + 2*(lebar*tinggi) << endl;
	cout << panjang * lebar * tinggi;
	return 0;
}
