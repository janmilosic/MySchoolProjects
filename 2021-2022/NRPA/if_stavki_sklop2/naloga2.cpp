#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int stevilo;

    srand(time(NULL));
    stevilo=rand()%20-10;

    cout<<"stevilo: " << stevilo <<endl;
    
    if (stevilo<0){
        cout<<"stevilo je negativno";
    } else if (stevilo>0){
        cout<<"stevilo je pozitivno";
    } else if (stevilo == 0) {
        cout<<"stevilo je enako 0";
    }

    return 0;
}