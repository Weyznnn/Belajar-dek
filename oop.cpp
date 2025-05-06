#include <iostream>
using namespace std;

class Mahasiswa {
    private:
        string nama;
        int NIM;
        float IPK;

    public: Mahasiswa(string nama, int NIM, float IPK){
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::IPK = IPK;
    }

    void print(){
        cout << "Nama Mahasiswa: " << nama << endl;
        cout << "NIM Mahasiswa: " << NIM << endl; 
        cout << "IPK Mahasiswa: " << IPK << endl;
    }

    void ubahNama(string namaBaru){
        Mahasiswa::nama = namaBaru;
    }
};

int main() {

    Mahasiswa mahasiswa1 = Mahasiswa("rafa nino", 124567, 4);
    Mahasiswa mahasiswa2 = Mahasiswa("diky p", 1233444, 4.5);
    
    mahasiswa1.print();
    mahasiswa2.print();
    
    mahasiswa1.ubahNama("helvann");
    mahasiswa1.print();

    return 0;
}