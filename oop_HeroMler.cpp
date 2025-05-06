#include <iostream>
using namespace std;

class Hero {
    private:
        string nama;
        int baseDamage;
        int kecepatan;
        int darah;
        short level;
        int uang;

    public: Hero(string nama = "Diki", int baseDamage = 100, int kecepatan = 100, int darah = 2000, short level = 1) {
        Hero::nama = nama;
        Hero::baseDamage = baseDamage;
        Hero::kecepatan = kecepatan;
        Hero::darah = darah;
        Hero::level = level;
    }
    void print() {
        cout << "Nama hero: " << nama << endl;
        cout << "Base damage: " << baseDamage << endl;
        cout << "Kecepatan: " << kecepatan << endl;
        cout << "Darah: " << darah << endl;
        cout << "Level: " << level << endl;
    }
    void naikLevel() {
        Hero::level ++;
        Hero::baseDamage += 100;
        Hero::darah += 200;
    }

    void beliItem(string item){
        if (item == "cod") {
            darah += 300;
        } else if (item == "bod") {
            baseDamage += 300;
        }
    }
};

int main() {
    Hero zilong = Hero("Zilong", 100);
    zilong.print();
    zilong.beliItem("cod");
    zilong.print();
    return 0;
}