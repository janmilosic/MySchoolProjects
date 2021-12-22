#include <iostream>
#include <time.h>

using namespace std;

int main() {

    int met_kocke;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f =0;

    srand(time(NULL));

    for (int i = 0; i < 100; ++i) {
        met_kocke=rand()%6+1;
        cout << met_kocke;

        if (met_kocke == 1){
            a++;
        } else if (met_kocke == 2){
            b++;
        } else if (met_kocke == 3){
            c++;
        } else if (met_kocke == 4){
            d++;
        } else if (met_kocke == 5){
            e++;
        } else if (met_kocke == 6){
            f++;
        }
    }

    cout << "" <<endl;
    cout << "Stevilo vrzenih 1: " << a <<endl;
    cout << "Stevilo vrzenih 2: " << b <<endl;
    cout << "Stevilo vrzenih 3: " << c <<endl;
    cout << "Stevilo vrzenih 4: " << d <<endl;
    cout << "Stevilo vrzenih 5: " << e <<endl;
    cout << "Stevilo vrzenih 6: " << f <<endl;

    return 0;
}