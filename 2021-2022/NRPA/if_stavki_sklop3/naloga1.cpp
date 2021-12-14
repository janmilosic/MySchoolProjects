#include <iostream>

using namespace std;

int main() {

    char znak;

    cout<<"Vnesi nek znak: "<<endl;
    cin>>znak;

    if (znak == 'A' ||znak == 'a' || znak == 'E' || znak == 'e' || znak == 'I' || znak == 'i' || znak == 'O' || znak == 'o' || znak == 'U' || znak == 'u'){
        cout<<"to sigurni ni praf"<<endl;
    } else {
        cout<<"eh nimas pojma "<<endl;
    }

    return 0;

}