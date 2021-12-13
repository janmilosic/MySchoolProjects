#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int neko_stevilo, vnos_stevilo;

    srand(time(NULL));
    neko_stevilo=rand()%5+1;

    cout<<"Poskusaj uganiti stevilo med 1 in 5: ";
    cin>>vnos_stevilo;

    if (vnos_stevilo==neko_stevilo){
        cout<<"BINGOOOOO!";
    } else{
        cout<<"vec srece prihodnjic";
    }

    return 0;
}