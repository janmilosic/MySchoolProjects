#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char pol[100];
    cout<<" Tukaj vstavi besedilo "<<endl;
    cin.getline(pol,100);
    for(int i;pol[i]!='\0';i++){

    pol[i] = tolower(pol[i]);
    }
    pol[0] = toupper(pol[0]);
    cout<<pol;
    return 0;
}