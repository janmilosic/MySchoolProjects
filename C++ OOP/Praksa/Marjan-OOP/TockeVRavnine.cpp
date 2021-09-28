#include <iostream>
#include <math.h>
using namespace std;

struct tocke {
    int x, y;
};

float razdalja(tocke a, tocke b) {

    int k1, k2;

    k1 = b.x - a.x;
    k2 = b.y - a.y;

    return sqrt((float) k1 * k1 + k2 * k2);
}

int main() {

    tocke a,b;

    cout << "Vnesite x za tocko a: ";
    cin >> a.x;
    cout << "Vnesite y za tocko a: ";
    cin >> a.y;
    cout << "Vnesite x za tocko b: ";
    cin >> b.x;
    cout << "Vnesite y za tocko b: ";
    cin >> b.y;
    cout << "Razdalja med toÄkama je: " << razdalja(a,b);

    return 0;
}