#include <iostream>
#include <ctype.h>

using namespace std;

int main() {

    char nekaj;

    cout << "Vpisi posebni znak, crko ali stevilko do 9: " << endl;
    cin >> nekaj;

    if (isalpha(nekaj)){
        cout << "Vnesel si crko!" << endl;
    } else if (isdigit(nekaj)){
        cout << "Vnesel si stevilko!" << endl;
    } else {
        cout << "Vnesel si posebni znak!" << endl;
    }

    return 0;
}