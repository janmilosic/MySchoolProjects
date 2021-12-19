#include <iostream>

using namespace std;

string niz;

string obrniNiz(){

    string obrnjen;

    for (int i = niz.length()-1; i >= 0; i--) {
        obrnjen = obrnjen + niz[i];
    }
    return obrnjen;
}

int main() {

    string obrnjen;

    cout << "Vnesi nek niz, ki ga zelis obrniti: " << endl;
    cin>>niz;

    obrnjen = obrniNiz();
    cout << obrnjen << endl;

    return 0;
}