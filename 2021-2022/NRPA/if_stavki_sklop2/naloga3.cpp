#include <iostream>

using namespace std;

int main()
{

    int stevilo;

    cout<<"Podaj celo stevilo: "<<endl;
    cin>>stevilo;

    if (stevilo % 2 == 0){
        cout<<"sodo"<<endl;
    } else {
        cout<<"liho"<<endl;
    }

    return 0;
}