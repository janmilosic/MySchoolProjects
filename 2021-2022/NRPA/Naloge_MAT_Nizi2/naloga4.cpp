#include <iostream>

using namespace std;

string vnos, najdaljsa = "";

string vnasanje(){

    for (int i = 0; i < i+1; ++i) {

        cout << "Vnesite neko besedilo (ce vnesete 0 se program zakljuci): " << endl;
        getline(cin, vnos);

        if (vnos[0] != '0'){

            if (vnos.length() > najdaljsa.length()){
                najdaljsa = vnos;
            }
        } else if (vnos[0] == '0'){
            cout << najdaljsa << endl;
            break;
        }
    }
}

int main() {

    vnasanje();

    return 0;
}