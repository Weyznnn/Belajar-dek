#include <iostream>
#include <string>

using namespace std;

string kata;

void ejaan() {
    for(int i = 0; i < kata.length(); i ++) {
        cout << "\'" << kata[i] << "\'" << " ";
    }
}

int main() {
    cout << "Masukkan kata yang akan di eja: ";
    cin >> kata;

    cout << "\"" << kata << "\"" << " -> ";

    ejaan();

    return 0;
}