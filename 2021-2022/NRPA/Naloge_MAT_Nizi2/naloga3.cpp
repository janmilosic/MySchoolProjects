#include <iostream>

using namespace std;

string niz, spucano;
char crka;
int a;

void zadnjaPojavitevCrke(){

    for (int i = 0; i < niz.length(); ++i) {
        if (niz[i] == crka){
            a = i;
        }
    }

}

int main() {

    cout << "Vnesi niz: " << endl;
    getline(cin,niz);

    cout << "Vnesi crko: " << endl;
    cin >> crka;

    zadnjaPojavitevCrke();

    cout << a+1 <<endl;

    return 0;
}