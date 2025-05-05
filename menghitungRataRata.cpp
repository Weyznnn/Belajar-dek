#include <iostream>
using namespace std;

int jumlah, bilangan, banyakBilangan;

int input(int array[], int panjangData) {
    for(int i = 0; i < panjangData; i++) {
        cout << "Masukkan sebuah bilangan: ";
        cin >> array[i];
    } return array[panjangData];
}

float operasiRataRata (int array[]) {
    for(int i = 0; i < banyakBilangan; i++) {
        jumlah += array[i];
    } float hasil = static_cast<float>(jumlah) / static_cast<float>(banyakBilangan);
    return hasil;
}

int main() {
    int data[banyakBilangan];

    cout << "masukkan banyak bilangan: ";
    cin >> banyakBilangan;

    input(&data[banyakBilangan], banyakBilangan);

    cout << "Rata-rata dari data tersebut adalah " << operasiRataRata(&data[banyakBilangan]);
    
    return 0;
}