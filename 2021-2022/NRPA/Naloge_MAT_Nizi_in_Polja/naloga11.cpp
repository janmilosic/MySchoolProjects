#include<iostream>
using namespace std;

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
            ch=='O' || ch=='U');
}
int bogateBese(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i]))
            ++count;
    return count;
}

int main()
{
    string str = "";
    int j=0;

    for (int a = 0; a < 200;) {


            for (; j < 1; ++j) {
                cout << "vnesi besedo: " << endl;
                cin >> str;

                if (a < 200) {

                if (bogateBese(str) >= 3) {
                    j--;
                    string polje[200];
                    polje[a] = str;
                    a++;
                } else {
                    cout << "nene dela nic" << endl;
                }
            }else {
                    cout << "vpisal si 200 besed JEJJ" << endl;
                }
        }
    }

    return 0;
}