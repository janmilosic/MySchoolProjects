#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main() {

    string beseda = "";
    string text;
    ifstream file("text.txt");
    list<string> list;

    while (getline(file, text)) {
        for (int i = 0; text[i] != '\0'; i++) {
            if (text[i] == ' '){
                list.push_back(beseda);
                beseda = "";
            }
            else if (text[i] >= 65 && text[i] <= 122)
                beseda += text[i];
        }
    }

    list.sort();

    for (string letter : list)
        cout << letter << endl;

    cout << "Stevilo besed: " << list.size() << endl;

    return 0;
}
