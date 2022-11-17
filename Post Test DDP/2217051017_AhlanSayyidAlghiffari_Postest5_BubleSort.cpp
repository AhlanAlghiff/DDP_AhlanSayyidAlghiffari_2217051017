#include <iostream>
using namespace std;

void sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i ++) {
    for(int j = n - 1; j > i; j --) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      }
    }
  }
}

int main() {
  int n = 5;
  int arr[] = {15, 10, 5, 0, 12};
  
  cout << "Array sebelum disorting : ";
  int i = 0;
  while (i < n){
  	cout << arr[i] << " ";
  	i++;
  }
  cout << endl << endl;
  
  cout << "Array setelah disorting : ";
  sort(arr, n);
  int j = 0;
  while (j < n){
  	cout << arr[j] << " ";
  	j++;
  }
  cout << endl;
  return 0;
}
