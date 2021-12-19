#include <iostream>

using namespace std;

string niz1;
string niz2;


string zdruziNiza(){
    string nov_niz;
    nov_niz = niz1 + niz2;
    return  nov_niz;
}

int main() {

    string nov_niz;

    cout << "Vnesi prvi niz: " << endl;
    cin>>niz1;
    cout << "Vnesi prvi niz: " << endl;
    cin>>niz2;

    nov_niz = zdruziNiza();
    cout << nov_niz <<endl;

    return 0;
}