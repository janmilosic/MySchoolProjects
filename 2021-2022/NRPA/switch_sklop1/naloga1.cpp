#include <iostream>

using namespace std;

int main() {

    int stevilka;

    cout << "Vpisi stevilo med 1 in 5: ";
    cin >> stevilka;

    switch (stevilka) {
        case 1:
            cout << "Vpisal si stevilo 1";
            break;
        case 2:
            cout << "Vpisal si stevilo 2";
            break;
        case 3:
            cout << "Vpisal si stevilo 3";
            break;
        case 4:
            cout << "Vpisal si stevilo 4";
            break;
        case 5:
            cout << "Vpisal si stevilo 5";
            break;
    }

    return 0;

}