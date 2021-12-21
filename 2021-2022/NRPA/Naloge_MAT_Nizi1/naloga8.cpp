#include <iostream>

using namespace std;

string niz, podniz;
int a;

void aliJePodniz(){

    for (int i = 0; i < niz.length(); ++i) {
        if (niz[i] == podniz[0]){
            if (niz[i+1] == podniz[1] && niz[i+2] == podniz[2]){
                a++;
            }
        }
    }

    if (a != 0){
        cout << "TRUE" <<endl;
    } else {
        cout << "FALSE" <<endl;
    }

}

int main() {

    cout << "Vnesi niz: " << endl;
    getline(cin,niz);

    cout << "Vnesi podniz: " << endl;
    getline(cin,podniz);

    aliJePodniz();

    return 0;
}