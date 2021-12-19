#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string besedilo;
string koncni_niz;

string vrniBrezSograsnikov(){

    for (int i = 0; i < besedilo.length(); ++i) {
        if (besedilo[i] != 'A' && besedilo[i] != 'E' && besedilo[i] != 'I' && besedilo[i] != 'O' && besedilo[i] != 'U'){
        koncni_niz = koncni_niz + besedilo[i];
        }
    }
    return koncni_niz;
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, besedilo);
    transform(besedilo.begin(), besedilo.end(),besedilo.begin(), ::toupper);

    koncni_niz = vrniBrezSograsnikov();
    cout << koncni_niz << endl;

    return 0;
}