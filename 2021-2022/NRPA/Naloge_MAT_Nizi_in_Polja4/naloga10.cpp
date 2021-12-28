#include <iostream>
#include <time.h>

using namespace std;

int stevila[100];
int binarna[32];

void dvojisko(int n)
{
    int i = 0;
    while (n > 0) {

        binarna[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binarna[j];
        cout << " "<<endl;
}

void vrniPoljeDvojiskihStevil(){

    srand(time(NULL));

    for (int i = 0; i < 100; ++i) {
        stevila[i] = rand()%1024+1;
        cout << stevila[i] << " ";
        dvojisko(stevila[i]);
    }
}

int main() {

    vrniPoljeDvojiskihStevil();

    return 0;
}