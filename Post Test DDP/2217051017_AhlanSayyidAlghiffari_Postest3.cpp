#include <iostream>

//AhlanSayyidAlghiffari_2217051017
//22-September-2022
using namespace std;
int main(){
	
  int tahun;
  cin >> tahun;
  cout << endl;
  
  if (tahun % 400 == 0){
    cout << "Merupakan Tahun Kabisat \n";
  } else if(tahun % 100 == 0){
    cout << "Bukan Tahun Kabisat \n";
  } else if(tahun % 4 == 0){
    cout << "Merupakan Tahun Kabisat \n";
  } else {
    cout << "Bukan Tahun kabisat \n";
  }
  cin.get();
  return 0;
}

