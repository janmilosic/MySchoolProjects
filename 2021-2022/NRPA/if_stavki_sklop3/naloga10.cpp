#include <iostream>

using namespace std;

int main() {

    int dan, mesec, leto;
    string meseci[12] = {"januar","februar", "marec", "april", "maj", "juni", "julij", "avgust", "september", "oktober", "november", "december"};

    cout << "Vpisi povrsti dan-mesec-leto: "<<endl;
    cin>>dan;
    cin>>mesec;
    cin>>leto;
    cout << dan<< ". " << meseci[mesec-1]<< " " << leto <<endl;
    
    return 0;

}
