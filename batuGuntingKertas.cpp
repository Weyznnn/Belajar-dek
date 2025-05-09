#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const string character[3] = {"Batu", "Gunting", "Kertas"};

void menentukanHasil(string musuh, string pemain){
    if(musuh == pemain) {
        cout << "Permainan seri\n";
    } else if (
        (pemain == "Kertas" && musuh == "Batu") ||
        (pemain == "Batu" && musuh == "Gunting") ||
        (pemain == "Gunting" && musuh == "Kertas")) 
    {
        cout << "Selamat anda menang\n";
    } else {
        cout << "Anda kalah\n";
    }
}

int angkaAcak(){
    srand(time(0));
    return (rand() %3);
}

int main() {
    short pemainIndex, musuhIndex;
    string pemain, musuh;
    char pengulangan;

    do {
        cout << "pilih '1' untuk batu \npilih '2' untuk gunting \npilih '3' untuk kertas \n";
        cin >> pemainIndex;
        pemain = character[pemainIndex - 1];

        
        musuhIndex = angkaAcak();
        musuh = character[musuhIndex];

        cout << "Kamu memilih: " << pemain << endl;
        cout << "Musuh memilih: " << musuh << endl;

        menentukanHasil(musuh, pemain);

        cout << "Apakah kamu mau bermain lagi? [Y/N]\n";
        cin >> pengulangan;

    } while(tolower(pengulangan) == 'y');
    return 0;
}