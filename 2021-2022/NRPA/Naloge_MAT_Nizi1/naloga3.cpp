#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string besedilo;
string cenzura;

void cenzuraSamoglasnikov(){

    for (int i = 0 ; i <= besedilo.length(); i++) {
        if (besedilo[i] == 'A' || besedilo[i] == 'E' || besedilo[i] == 'I' || besedilo[i] == 'O' || besedilo[i] == 'U'){
            besedilo[i] = '#';
        }
        cenzura = cenzura + besedilo[i];
    }
    cout << cenzura <<endl;
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, besedilo);
    transform(besedilo.begin(), besedilo.end(),besedilo.begin(), ::toupper);

    cenzuraSamoglasnikov();

    return 0;
}