#include <iostream>
#include <string>

using namespace std;

string besedilo;
string obrnjen;

void dodajObrat(){

    for (int i = besedilo.length()-1; i >= 0; i--) {
        obrnjen = obrnjen + besedilo[i];
    }
    besedilo = besedilo + obrnjen;
    cout << besedilo <<endl;
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, besedilo);

    dodajObrat();

    return 0;
}