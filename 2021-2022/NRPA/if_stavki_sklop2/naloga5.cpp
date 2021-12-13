#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int stevilo;

    srand(time(NULL));
    stevilo=rand()%10+10;

    cout<<"stevilo je" << stevilo <<endl;

    if (stevilo % 2 == 0 && stevilo>15){
        cout<<"to stevilo je sodo in vecje od 15"<<endl;
    } else {
        cout<<"to stevilo ni sodo in vecje od 15"<<endl;
    }
    return 0;
}