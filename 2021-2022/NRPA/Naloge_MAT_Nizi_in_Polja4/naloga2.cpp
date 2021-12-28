#include <iostream>
#include <time.h>

using namespace std;

int nakljucna, a;
int polje[10];

void nakljucnaLihaStevila(){

    srand(time(NULL));

    for (int i = 0; i < 10;) {
        a=rand()%100+1;
        if (a % 2 != 0){
            polje[i] = a;
            i++;
        }
    }

    for (int j = 0; j < 10; ++j) {
        cout << polje[j] << " ";
    }
}

int main() {

    nakljucnaLihaStevila();

    return 0;
}