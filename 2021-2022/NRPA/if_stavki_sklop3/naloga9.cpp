#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int random_st1, enice, desetice, stotice, vsota;

    srand(time(NULL));
    random_st1=rand()%900+100;

    cout << "Stevilo: "<<random_st1<<endl;

    enice = random_st1 % 10;
    random_st1 /=10;
    desetice = random_st1 % 10;
    random_st1 /=10;
    stotice = random_st1 % 10;

    vsota = enice + desetice + stotice;
    cout << "Vsota: "<<vsota<<endl;

    return 0;

}