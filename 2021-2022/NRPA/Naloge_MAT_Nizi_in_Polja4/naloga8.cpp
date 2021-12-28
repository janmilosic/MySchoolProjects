#include <iostream>
#include <time.h>

using namespace std;

int polje[200];
int prastevila[200];
int a = 0;

void pra(){
    srand(time(NULL));

    for (int i = 0; i < 200; i++) {
        polje[i] = rand()%100+1;
        cout << polje[i] <<" ";
    }
    cout <<" "<<endl;

    for (int i = 0; i < 200; ++i) {
        if (polje[i] == 2 || polje[i] == 3 || polje[i] == 5 || polje[i] == 7 || polje[i] == 11 || polje[i] == 13 || polje[i] == 17 || polje[i] == 19 || polje[i] == 23 || polje[i] == 29 || polje[i] == 31 || polje[i] == 37 || polje[i] == 41 || polje[i] == 43 || polje[i] == 47 || polje[i] == 53 || polje[i] == 59 || polje[i] == 61 || polje[i] == 67 || polje[i] == 71 || polje[i] == 73 || polje[i] == 79 || polje[i] == 83 || polje[i] == 89 || polje[i] == 97){
            prastevila[a]  = polje[i];
            a++;
        }
    }

    cout<< "PRASTEVILA "<<endl;

    for(int b=0;b<a;b++){
        cout<< prastevila[b]<<" ";
    }
}

int main() {

    pra();

    return 0;
}