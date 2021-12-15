#include <iostream>

using namespace std;

int main() {

    int stevilo;

    cout << "Vnsesi stevilo med 1 in 7 in program ti bo izpisal dan v tednu:  ";
    cin >> stevilo;

    switch (stevilo) {
        case 1:
            cout << "1 - ponedeljek" << endl;
            break;
        case 2:
            cout << "2 - torek" << endl;
            break;
        case 3:
            cout << "3 - sreda" << endl;
            break;
        case 4:
            cout << "4 - cetrtek" << endl;
            break;
        case 5:
            cout << "5 - petek" << endl;
            break;
        case 6:
            cout << "6 - sobota" << endl;
            break;
        case 7:
            cout << "7 - nedelja" << endl;
            break;
        default:
            cout << "vpisano stevilo ni veljavno" <<endl;
    }

    return 0;
}