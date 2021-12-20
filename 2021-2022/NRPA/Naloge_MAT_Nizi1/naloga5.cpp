#include <iostream>

using namespace std;

int stevilo;
int array[8];
int a, b = 8, c;

int preveriDavcnoST(){

    for (int i = 0; i < 8; i++) {
       a = array[i] * b;
       b--;
       c = c + a;
    }

    if (c % 11 != 0){
        cout << "Davcna je napacna!" << endl;
    } else {
        cout << "Davcna je pravilna!" << endl;
    }
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    cin >> stevilo;

    for (int i = 7; i >= 0; i--) {
        array[i] = stevilo % 10;
        stevilo /= 10;
    }

    preveriDavcnoST();

    return 0;
}