#include <iostream>

using namespace std;

string niz, spucano;

void odstraniPodvojeneZnake(){

    for (int i = 0; i < niz.length(); ++i) {
        if (i % 2 == 0){
            spucano = spucano + niz[i];
        }
    }

    cout << "Nov niz: " << spucano << endl;

}

int main() {

    cout << "Vnesi niz: " << endl;
    getline(cin,niz);

    odstraniPodvojeneZnake();

    return 0;
}