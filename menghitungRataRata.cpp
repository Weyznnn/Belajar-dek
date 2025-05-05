#include <iostream>
using namespace std;

void input(int array[], int panjangData) {
    for(int i = 0; i < panjangData; i++) {
        cout << "Masukkan sebuah bilangan: ";
        cin >> array[i];
    }
}

float operasiRataRata (int array[], int banyakBilangan) {
    int jumlah;
    for(int i = 0; i < banyakBilangan; i++) {
        jumlah += array[i];
    } return static_cast<float>(jumlah) / banyakBilangan;
}

int main() {
    int banyakbilangan;
    cout << "masukkan banyak bilangan: ";
    cin >> banyakbilangan;

    int data[banyakbilangan];


    input(data, banyakbilangan);

    cout << "Rata-rata dari data tersebut adalah " << operasiRataRata(data, banyakbilangan);
    
    return 0;
}