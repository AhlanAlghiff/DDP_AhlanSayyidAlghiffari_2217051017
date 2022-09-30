#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double variance;
    int n;
    float mean, jumlah, total;
    jumlah = 0;
    total = 0;

    cin >> n;

    for (int a = 0; a <= n; a++){
        jumlah += a;
        mean = jumlah/n;
    } 
    for (int b = 1; b <= n; b++){
        // total += pow(2, (b - mean));
        total = total + (b - mean)*(b - mean);
    }
    variance = total/(n - 1);
    cout << variance << endl;

    cin.get();
    return 0;
}