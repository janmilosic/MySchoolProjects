#include <iostream>
#include <time.h>

using namespace std;

int stevilo;

void izpisiHarshadovaStevila(){

    srand(time(NULL));

    for (int a = 0; a < 200; ++a) {

        for (int i = 0; i < 1; ++i) {
            stevilo = rand()%900+100;
            int vsota=0;
            int n = stevilo;

            while (stevilo > 0){
                int ods = stevilo % 10;
                vsota = vsota + ods;
                stevilo = stevilo / 10;
            }

            if (n % vsota == 0){
                cout << n << " je Harshadovo strevilo"<<endl;
            }
        }
    }
}

int main() {

    izpisiHarshadovaStevila();

    return 0;
}