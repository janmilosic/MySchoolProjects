#include <iostream>
#include <time.h>

using namespace std;

void izpisiObilnaStevila(){

    srand(time(NULL));

    for (int i = 0; i < 200; ++i) {
        int stevilo;
        int a;
        int vsota = 0;

        for (int i = 0; i < 1; ++i) {
            stevilo = rand()%900+100;
        }

        for (int j=1; j < stevilo; j++)
        {
            a = stevilo % j;
            if (a == 0)
                vsota += j;
        }

        if (vsota > stevilo){
            cout<< stevilo <<" je obilno stevilo."<<endl;
        }
    }

}

int main() {

    izpisiObilnaStevila();

    return 0;
}