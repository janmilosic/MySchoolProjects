#include <iostream>

using namespace std;

int main()
{

    int stevilo;

    cout<<"Vnesi neko celo stevilo: ";
    cin>>stevilo;

    if (stevilo<0){
        cout<<"stevilo je negativno";
    } else if (stevilo>0){
        cout<<"stevilo je pozitivno";
    } else if (stevilo == 0) {
        cout<<"stevilo je enako 0";
    }

    return 0;
}