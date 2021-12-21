#include <iostream>

using namespace std;

string niz, odstranjeni;

void odstraniSodeZnake(){

    for (int i = 0; i < niz.length(); ++i) {
        if (i % 2 == 0){
            odstranjeni = odstranjeni + niz[i];
        }
    }

    cout << "Nov niz: " << odstranjeni << endl;

}

int main() {

    cout << "Vnesi niz: " << endl;
    getline(cin,niz);

    odstraniSodeZnake();

    return 0;
}