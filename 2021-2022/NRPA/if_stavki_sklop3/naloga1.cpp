#include <iostream>

using namespace std;

int main() {

    char znak;

    cout<<"Vnesi nek znak: "<<endl;
    cin>>znak;

    if (znak == 'A' ||znak == 'a' || znak == 'E' || znak == 'e' || znak == 'I' || znak == 'i' || znak == 'O' || znak == 'o' || znak == 'U' || znak == 'u'){
        cout<<"vnesel si veljaven znak"<<endl;
    } else {
        cout<<"vnesen znak je neveljaven"<<endl;
    }

    return 0;

}