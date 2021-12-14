#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int random_st1, enice, desetice, stotice;

    srand(time(NULL));
    random_st1=rand()%900+100;

    cout << "Stevilo: "<<random_st1<<endl;

    enice = random_st1 % 10;
    random_st1 /=10;
    desetice = random_st1 % 10;
    random_st1 /=10;
    stotice = random_st1 % 10;

    cout << "Enice: "<<enice<<endl;
    cout << "Desetice: "<<desetice<<endl;
    cout << "Stotice: "<<stotice<<endl;

    return 0;

}
