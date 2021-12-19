#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string besedilo;
string obrnjen;

void aliJePolindrom(){

    for (int i = besedilo.length()-1; i >= 0; i--) {
        obrnjen = obrnjen + besedilo[i];
    }

    if (obrnjen == besedilo){
        cout << "to je polindrom"<<endl;
    } else {
        cout << "ni polindrom"<<endl;
    }
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, besedilo);
    transform(besedilo.begin(), besedilo.end(),besedilo.begin(), ::toupper);

    aliJePolindrom();

    return 0;
}