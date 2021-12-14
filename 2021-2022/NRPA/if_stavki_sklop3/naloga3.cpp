#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int random;

    srand(time(NULL));
    random=rand()%26;

    char crke[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<< "crka: "<<crke[random]<<endl;

    if (crke[random] == 'a' || crke[random] == 'e' || crke[random] == 'i' || crke[random] == 'o' || crke[random] == 'u'){
        cout<< "Ta crka je samoglasnik " <<endl;
    }

    return 0;

}