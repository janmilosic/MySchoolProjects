#include <iostream>

using namespace std;

string besedilo, velike, male;

string odmotajPrepleteneCrke(){

    for (int i = 0; i < besedilo.length(); ++i) {
        if (besedilo[i] >= 65  && besedilo[i] <= 90){
            velike = velike + besedilo[i];
        } else if (besedilo[i] >= 97  && besedilo[i] <= 122) {
            male = male + besedilo[i];
        }
    }

    cout << velike + male << endl;

}

int main() {

    cout << "Podaj prepleteno besedilo ki vsebuje mesane male in velike crke: " <<endl;
    getline(cin,besedilo);

    odmotajPrepleteneCrke();

    return 0;
}