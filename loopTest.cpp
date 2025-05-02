#include <iostream>
using namespace std;

int age = 18;

int timePased(){
    while(age < 21) {
        age ++;
        cout << "Your age has increase to " << age << endl;
    } return 0;
}

int main() {
    if(age < 21) {
        cout << "No beer for you little guy \n";
        timePased();
        cout << "Now you can enjoy the beer \n";
    } else{
        cout << "Enjoy your beer folks";
    }
    return 0;
}