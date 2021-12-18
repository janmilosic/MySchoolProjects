#include <iostream>

using namespace std;

int main() {

    int n;
    int nekaj = 0;


    cout << "Vnesi neko vrednost n-ja (podas lahko samo liha stevila): " <<endl;
    cin >> n;
    if (n % 2 == 0){
        cout << "Vnesel si sodo stevilo!" << endl;
    }else {
        for (int i = 0; i < n; ++i) { // i gre navpicno
            for (int j = 0; j < n; ++j) { // j gre vodoravno
                if (i == n/2 || j == n/2){
                    cout << "1  ";
                } else {
                    cout << "0  ";
                }
            }
            cout << "" << endl;
        }
    }

    return 0;
}