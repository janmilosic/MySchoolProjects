#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int stevilo;

    srand(time(NULL));
    stevilo=rand()%40+10;

    cout<<"stevilo je" << stevilo <<endl;

    if (stevilo % 2 == 0){
        cout<<"sodo"<<endl;
    } else {
        cout<<"liho"<<endl;
    }
    
    return 0;
}