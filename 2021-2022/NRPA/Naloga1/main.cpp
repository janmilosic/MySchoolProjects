#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <regex>  //uporaba knjiznice regex

using namespace std;

void ustvari(){

    ofstream datoteka("janmilosic.txt");
    datoteka<<" Jan Milosic, Vareja 2a 2284 Videm pri Ptuju, 070 208 028 "<<endl;
    datoteka.close();
}

int main() {

    string besedilo;

    ifstream datoteka("janmilosic.txt");
    while (getline (datoteka, besedilo)) {

        cout << "Staro besedilo: " << besedilo <<endl;

        //deklaracija samoglasnikov
        regex a("a");
        regex e("e");
        regex i("i");
        regex o("o");
        regex u("u");

        //nov string in zamenjava znakov (šifriram)
        string novo1 = regex_replace(besedilo, a, "#!");
        string novo2 = regex_replace(novo1, e, "1*");
        string novo3 = regex_replace(novo2, i, "i");
        string novo4 = regex_replace(novo3, o, "0");
        string koncno = regex_replace(novo4, u, "?");

        replace( koncno.begin(), koncno.end(), 'i', '"' );

        cout << "Novo besedilo: " << koncno <<endl;

        //nova datoteka code-janmilosic.txt
        ofstream novaDatoteka("code-janmilosic.txt");
        novaDatoteka<< koncno <<endl;
        novaDatoteka.close();
    }

    ustvari();

    return 0;
}

/*
a    -v-  #!
e    -v-  1*
i    -v-   "
o    -v-  0
u    -v-   ?
 */




