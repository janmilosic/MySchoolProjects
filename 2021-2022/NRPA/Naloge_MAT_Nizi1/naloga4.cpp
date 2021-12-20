#include <iostream>
#include <string>

using namespace std;

string stevilo;
string obrnjen;

void aliJePolindromskoStevilo2(){

    for (int i = stevilo.length()-1; i >= 0; i--) {
        obrnjen = obrnjen + stevilo[i];
    }

    if (obrnjen == stevilo){
        cout << "true"<<endl;
    } else {
        cout << "false"<<endl;
    }
    cout << "Izpis obrnjenega: " << obrnjen <<endl;

}

int main() {

    cout << "Vnesi poljubno besedilo: " << endl;
    getline (cin, stevilo);

    aliJePolindromskoStevilo2();

    return 0;
}