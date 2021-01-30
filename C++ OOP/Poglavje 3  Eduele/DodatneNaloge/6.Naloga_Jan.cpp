#include <cstdlib>
#include <iostream>

using namespace std;

int prestejSamoglasnike(char besedilo[]) {

    int st = 0;

    for (int i = 0; besedilo[i] != '\0'; i++)
        if (tolower(besedilo[i]) == 'a' || tolower(besedilo[i]) == 'e'
            || tolower(besedilo[i]) == 'i' || tolower(besedilo[i]) == 'o'
            || tolower(besedilo[i]) == 'u') st++;

        
    return st;
}

int main() {

    char besedilo[100];

    cout << "Podaj besedilo: ";
    cin.get(besedilo, 100);

    cout << "Stevilo samoglasnikov : " << prestejSamoglasnike(besedilo);

    return 0;
}







