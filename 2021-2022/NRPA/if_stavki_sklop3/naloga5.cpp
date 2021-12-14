#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int stevilo1, stevilo2, stevilo3, stevilo4 ;
    int min = 11;

    srand(time(NULL));
    stevilo1=rand()%20-10;
    stevilo2=rand()%20-10;
    stevilo3=rand()%20-10;
    stevilo4=rand()%20-10;

    cout<<"stevilo1: " << stevilo1 <<endl;
    cout<<"stevilo2: " << stevilo2 <<endl;
    cout<<"stevilo3: " << stevilo3 <<endl;
    cout<<"stevilo4: " << stevilo4 <<endl;

    if (stevilo1 < min){
        min=stevilo1;
    }
    if (stevilo2 < min){
        min=stevilo2;
    }
    if(stevilo3 < min){
        min=stevilo3;
    }
    if(stevilo4 < min){
        min=stevilo4;
    }

    cout << "Najmanjse stevilo je: "<< min <<endl;
    
    return 0;
}