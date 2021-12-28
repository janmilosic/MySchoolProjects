#include <iostream>

using namespace std;

string besedilo;

void najdaljsiNiz(){

    string max = "";

    cout << "Vnesi besedo(20 krat): " <<endl;
    for (int i = 0; i < 20; ++i) {
        cin >> besedilo;
        if (besedilo.length() > max.length()){
            max = besedilo;
        }
    }
    cout << "Najdaljsa beseda: " << max <<endl;
}

int main() {

    najdaljsiNiz();

    return 0;
}