#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

int batu = 0;
int gunting = 1;
int kertas = 2;
int pemain;

int main() {
    while(1) {
        cout << "pilih '1' untuk batu \npilih '2' untuk gunting \npilih '3' untuk kertas \nKamu memilih: ";
        cin >> pemain;;
        srand(time(0));
        int musuh = (rand() %3) + 1 ;
        cout << "Musuh memilih: " << musuh << endl;
        if(musuh == pemain) {
            cout << "Permainan seri\n";
        }
        else if ((musuh - 1 == pemain) || (musuh + 2 == pemain))
        {
            cout << "Selamat anda menang\n";
        }
        
        else {
            cout << "Anda kalah\n";
        }
        cout << "1 > 2 > 3 > 1 ...\n";
        char pengulangan;
        cout << "Apakah kamu mau bermain lagi? [Y/N]\n";
        cin >> pengulangan;
        if(tolower(pengulangan) == 'y') {
            continue;
        } 
        else {
            break;
        }
    } return 0;
}