#include <iostream>

using namespace std;

int main() {

    int st_kotov, ploskve;

    cout << "RACUNANAJE PLOSKEV VECKOTNIKOV" << endl;
    cout << "Podaj stevilo kotov veckotnika: " << endl;
    cin >> st_kotov;

    if (st_kotov < 3){
        cout << "Stevilo ploskev je neveljavno!" << endl;

    } else if (st_kotov == 3) {

        switch (st_kotov) {
            case 3:
                ploskve = st_kotov + 1;
                cout << "Ta veckotnik je sestavljen iz: "<< ploskve << " ploskev " << endl;
                break;

            default:
                cout << "vneseno stevilo kotov je neveljavno" <<endl;
        }
    } else {

        ploskve = st_kotov + 2;
        cout << "Ta veckotnik je sestavljen iz: "<< ploskve << " ploskev " << endl;

    }

    return 0;
}