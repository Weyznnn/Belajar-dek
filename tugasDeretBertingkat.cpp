#include <iostream>
using namespace std;

int U_Deret(int a) {
    if (a == 1) {
        return 1;
    } else if (a == 2) {
        return 5;
    }
    return U_Deret(a - 2) + 1;
}

int main() {
    cout << U_Deret(7);
    return 0;
}