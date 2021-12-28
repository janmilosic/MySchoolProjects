#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int stevilo;
string stevilke;

void izpisiPolindrome(){

    srand(time(NULL));

    for (int a = 0; a < 200; ++a) {

        string obrni = "";

        for (int i = 0; i < 1; ++i) {
            stevilo = rand()%900+100;
            stevilke = to_string(stevilo);
            //cout<< "stevilo: " << stevilke <<endl;
        }

        for(int i = stevilke.length()-1; i>=0; i--){
            obrni = obrni + stevilke[i];
        }
            //cout<< "obrjeno: " << obrni <<endl;

        if (stevilke == obrni){
            cout << "polindrom: " << stevilke <<endl;
        }
    }
}

int main() {

    izpisiPolindrome();

    return 0;
}