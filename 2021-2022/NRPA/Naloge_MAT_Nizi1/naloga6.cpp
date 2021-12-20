//ne dela !!! reci aneje ker on ve

#include <iostream>

using namespace std;

int stevilo;
int array[13];
int a, b = 7, c = 0, d = 13;

int preveriDavcnoST(){

    for (int i = 0; i < 12; i++) {
        if (b > 1){
            a = array[i] * b;
        } else {
            a = array[i] * d;
        }

        b--;
        d--;
        c = c + a;
    }

    c = c + array[12];
    if (c % 11 != 0){
        cout << "EMSO je napacna!" << endl;
    } else {
        cout << "EMSO je pravilna!" << endl;
    }

}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    cin >> stevilo;

    for (int i = 12; i >= 0; i--) {
        array[i] = stevilo % 10;
        stevilo /= 10;
    }

    preveriDavcnoST();

    return 0;
}