#include <iostream>
#include <array>
using namespace std;

int main(){
    array<string, 3> nama = {"andi", "jarwo", "sopo"};

    int panjang = sizeof(nama) / sizeof(string);
    cout << panjang;

    return 0;
}