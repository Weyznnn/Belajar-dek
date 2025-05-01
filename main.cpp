#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.14159
short jariJari = 0;

int main()
{
    cout << "Masukkan jari jari lingkaran: ";
    cin >> jariJari;
    double hasil = PI * pow(jariJari, 2);
    cout << setprecision(5) << "hasil: " << hasil;
    return 0;
}