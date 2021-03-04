#include <iostream>

using namespace std;


int zanimivaVsotaStevk(int vhodnoSt){

    int desna = vhodnoSt % 100;//zadnji 2 stevilki
    int prvi = vhodnoSt / 100; // prvi 2 stevilki
    return prvi + desna;
}


int kolikoZanimivihRegij(string imeregije, MojaNaselja X[], int postnaSt, int statRegija){

    
    return stevilo???
}


int main(int argc, char const *argv[]){

    struct MojaNaselja {

        string naselje;
        int postnaSt;
        double povrsina;
        string statRegija;

    };

    int st;
    int statR;

    MojaNaselja poljeN[];

    poljeN[0].naselje = "Banovci";
    poljeN[0].postnaSt = 9241;
    poljeN[0].povrsina = 2.64;
    poljeN[0].statRegija = "Pomurska";

    poljeN[1].naselje = "Vransko";
    poljeN[1].postnaSt = 3305;
    poljeN[1].povrsina = 3.1;
    poljeN[1].statRegija = "Savinjska";

    poljeN[2].naselje = "Trbovlje";
    poljeN[2].postnaSt = 1420;
    poljeN[2].povrsina = 10.232;
    poljeN[2].statRegija = "Zasavska";

    cout << "Vnesi zaporedno število: " <<endl;
    cin >> st;

    cout << "Vnesi statistično regijo: : " <<endl;
    cin >> statR;

    poljeN[st].statRegija = statR;



    cout << "Vnesi stevilo: " <<endl;
    cin >> st;

    int vsotaMoja = zanimivaVsotaStevk(1234);

    return 0;
}
