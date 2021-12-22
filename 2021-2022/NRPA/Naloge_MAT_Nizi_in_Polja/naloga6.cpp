#include <iostream>

using namespace std;

string besedilo;

void najdaljsiTrijeNizi(){

    string max1 = "";
    string max2 = "";
    string max3 = "";

    cout << "Vnesi besedo(100 krat): " <<endl;
    for (int i = 0; i < 100; ++i) {
        cin >> besedilo;
        if (besedilo.length() > max1.length()){
            max3 = max2;
            max2 = max1;
            max1 = besedilo;
        } else if (besedilo.length() > max2.length() && besedilo.length() < max1.length()){
            max3 = max2;
            max2 = besedilo;
        } else if (besedilo.length() > max3.length() && besedilo.length() < max2.length()){
            max3 = besedilo;
        }
    }
    cout << "" << endl;
    cout << "Najdaljsa beseda 1: " << max1 << endl;
    cout << "Najdaljsa beseda 2: " << max2 << endl;
    cout << "Najdaljsa beseda 3: " << max3 << endl;
}

int main() {

    najdaljsiTrijeNizi();

    return 0;
}