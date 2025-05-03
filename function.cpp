#include <iostream>
using namespace std;

void print(float a){
    cout << a;
}

int factorial(int arg) {
    if(arg == 1) {
        return 1;
    }
    return factorial(arg - 1) * arg;
    
}

int fibonaci(int a) {
    if(a == 1 || a == 2){
        return 1;
    }
    return fibonaci(a - 1) + fibonaci(a - 2);
}

int U_Aritmatika(int n) {
    if (n == 1) {
        return -3;
    }
    return U_Aritmatika(n - 1) + 2;
}

float U_Geometri(int n) {
    if(n == 1) {
        return 16;
    }
    return U_Geometri(n - 1) / 2;
}

int main(){
    print(U_Geometri(6));

    return 0;
}
