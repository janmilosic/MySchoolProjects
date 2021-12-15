#include <iostream>

using namespace std;

int main() {

    int a,b;
    char znak;

    cout << "Ce zelis izracunati ploscino kvadrata vnesi 'k' za ploscino pravokotnika pa 'p' ";
    cin >> znak;

    switch (znak) {
        case 'k':
            cout << "PLOSCINA KVADRATA" << endl;
            cout << "Podaj se dolzino stranice a; " <<endl;
            cin >> a;
            cout << "Ploscina kvadrata: " << a * a <<endl;
            break;
        case 'p':
            cout << "PLOSCINA PRAVOKOTNIKA" << endl;
            cout << "Podaj se dolzino stranice a: " <<endl;
            cin >> a;
            cout << "Podaj se dolzino stranice b: " <<endl;
            cin >> b;
            cout << "Ploscina pravokotnika: " << a * b <<endl;
            break;
        default:
            cout << "vpisal si neveljaven znak" <<endl;
    }

    return 0;
}