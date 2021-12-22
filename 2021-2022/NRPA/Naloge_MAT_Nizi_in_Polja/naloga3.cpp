#include <iostream>
#include <time.h>

using namespace std;

int a, b;
int polje[100];

void nakljucnaLihaStevila(){

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        polje[i]=rand()%50+50;
        if (polje[i] % 2 != 0){
            a++;
        } else {
            b++;
        }
    }

    for (int j = 0; j < 100; ++j) {
        cout << polje[j] << " ";
    }
    cout << " " <<endl;
    cout << "Liha: " << a <<endl;
    cout << "Soda: " << b <<endl;
}


int main() {

    nakljucnaLihaStevila();

    return 0;
}