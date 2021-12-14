#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int random_st1, random_st2, random_st3, se_bolj_rand;

    srand(time(NULL));
    random_st1=rand()%20+20;
    random_st2=rand()%20+20;
    random_st3=rand()%20+20;

    se_bolj_rand = random_st1 + random_st2 + random_st3;
    cout << "Stevilo: "<< se_bolj_rand << endl;

    if (se_bolj_rand % 2 == 0){
        cout << "Stevilo je sodo"<< endl;
    } else {
        cout << "Stevilo je liho"<< endl;
    }

    return 0;

}
