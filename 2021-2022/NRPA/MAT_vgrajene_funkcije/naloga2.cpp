#include <iostream>

using namespace std;

int main() {

    int n;
    int nekaj = 0;


    cout << "Vnesi neko vrednost n-ja: " <<endl;
    cin >> n;

    for (int i = 0; i < n; ++i) { // i gre navpicno
        nekaj = nekaj + 1;
        for (int j = 0; j < n; ++j) { // j gre vodoravno
            if (i == 0 || j == 0 || i == n-1 || n-1 == j){
                cout << nekaj << "  ";
            } else {
                cout << "0  ";
            }
        }
        cout << "" << endl;
    }

    return 0;
}