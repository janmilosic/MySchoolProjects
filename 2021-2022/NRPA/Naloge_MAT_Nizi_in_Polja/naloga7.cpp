#include <iostream>
#include <time.h>

using namespace std;

int obrnjen[200];
int polje[200];
int a=199;

void obrniVrstniRed(){

    srand(time(NULL));

    for (int i = 0; i < 200; i++) {
        polje[i] = rand()%100+1;
        cout << polje[i] <<" ";
        obrnjen[a] = polje[i];
        a--;
    }
    cout<< ""<<endl;
    cout<< "obrnjene"<<endl;

}

int main() {

    obrniVrstniRed();
    for(int b=0;b<200;b++){
        cout<< obrnjen[b]<<" ";
    }
    return 0;
}
