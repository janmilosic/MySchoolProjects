#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string besedilo;
string koncni_niz;

string vrniSamoglasnike(){

    for (int i = 0; i < besedilo.length(); ++i) {
        if (besedilo[i] == 'A' || besedilo[i] == 'E' || besedilo[i] == 'I' || besedilo[i] == 'O' || besedilo[i] == 'U'){
        koncni_niz = koncni_niz + besedilo[i];
        }
    }
    return koncni_niz;
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    cin >> besedilo;
    transform(besedilo.begin(), besedilo.end(),besedilo.begin(), ::toupper);

    koncni_niz = vrniSamoglasnike();
    cout << koncni_niz << endl;

    return 0;
}