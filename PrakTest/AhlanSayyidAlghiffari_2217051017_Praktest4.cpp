#include <iostream>

using namespace std;
int main() {
	
//    int a, b;
//    cin >> a >> b;
//
//    for(int i = a; i <= b; i += a) {
//    	cout << i << " ";
//	}
	int a, b;
	cin >> a >> b;
	int i = a;
	
	while (i <= b){
		i += a;
		cout << i << " ";
	}
	cin.get();
	return 0;
}
