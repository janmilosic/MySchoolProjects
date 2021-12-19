#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string besedilo;
int nekaj;

int vrniBrezSamoglasnikov(){

    for (int i = 0; i < besedilo.length(); ++i) {
        if (besedilo[i] != 'A' && besedilo[i] != 'E' && besedilo[i] != 'I' && besedilo[i] != 'O' && besedilo[i] != 'U'){
        nekaj ++;
        }
    }
    return nekaj;
}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, besedilo);
    transform(besedilo.begin(), besedilo.end(),besedilo.begin(), ::toupper);

    nekaj = vrniBrezSamoglasnikov();
    cout << nekaj << endl;

    return 0;
}