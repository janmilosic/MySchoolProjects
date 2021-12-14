#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int random1, random2, random3;
    string niz1 = "NMS";

    srand(time(NULL));
    random1=rand()%26;
    random2=rand()%26;
    random3=rand()%26;

    char crke[26]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    string neke2 = string() + crke[random1] + crke[random2] + crke[random3];

    cout<< neke2 <<endl;

    if (niz1 == neke2 ){
        cout<< "BINGOOOOO!!! " <<endl;
    } else {
        cout<< "VEC SRECE PRIHODNJIC " <<endl;
    }

    return 0;

}