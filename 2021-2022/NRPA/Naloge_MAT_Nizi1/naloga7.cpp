#include <iostream>

using namespace std;

string niz1, niz2;
int a;

string aliStaBesediEnaki(){

    for (int i = 0; i < niz1.length(); ++i) {
        if (niz1[i] != niz2[i]){
            a++;
        }
    }

    if (a == 0){
        cout << "TRUE" <<endl;
    } else {
        cout << "FALSE" <<endl;
    }

}

int main() {

    cout << "Vnesi niz1: " << endl;
    getline(cin,niz1);

    cout << "Vnesi niz2: " << endl;
    getline(cin,niz2);

    aliStaBesediEnaki();

    return 0;
}