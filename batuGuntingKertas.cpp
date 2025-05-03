#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const string character[3] = {"Batu", "Gunting", "Kertas"};

int main() {
    short pemainIndex, musuhIndex;
    string pemain, musuh;

    while(1) {
        cout << "pilih '1' untuk batu \npilih '2' untuk gunting \npilih '3' untuk kertas \n";
        cin >> pemainIndex;
        pemain = character[pemainIndex - 1];

        srand(time(0));
        musuhIndex = (rand() %3);
        musuh = character[musuhIndex];

        cout << "Kamu memilih: " << pemain << endl;
        cout << "Musuh memilih: " << musuh << endl;

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

        char pengulangan;
        cout << "Apakah kamu mau bermain lagi? [Y/N]\n";
        cin >> pengulangan;

        if(tolower(pengulangan) == 'n') {
            break;
        } 

    } return 0;
}