#include <iostream>
#include <string>

using namespace std;

string besedilo1, besedilo2;
string zlito;

void zlij(){

    for (int i = 0 ; i <= besedilo1.length(); i++) {
        zlito = zlito + besedilo1[i] + besedilo2[i];
    }
    cout << zlito <<endl;
}

int main() {

    cout << "Vnesi poljubno besedilo1: " << endl;
    getline (cin, besedilo1);
    cout << "Vnesi poljubno besedilo2: " << endl;
    getline (cin, besedilo2);

    zlij();

    return 0;
}