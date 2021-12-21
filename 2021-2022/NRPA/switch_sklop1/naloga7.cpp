#include <iostream>

using namespace std;

int main() {

    string besedilo;

    cout << "Vnesi neko besedilo: " <<endl;
    getline(cin, besedilo);

    for (int i = besedilo.length(); i >= 0; --i) { // i gre navpicno
        for (int j = besedilo.length(); j >= 0; --j) { // j gre vodoravno
            if (besedilo.length() == j){

                cout << besedilo[j] << "  ";
            } else {
                cout << besedilo[i]<< "  ";
            }
        }
        cout << "" << endl;
    }

    return 0;
}