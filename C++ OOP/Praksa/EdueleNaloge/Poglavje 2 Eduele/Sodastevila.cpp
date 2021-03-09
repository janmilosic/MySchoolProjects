#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int array[10];
    int obratno[10];
    int i = 0;
    int vsota = 0;

    for (int st = 1; i != 10; st++)
    {
        if (st % 2 == 0)
        {
            array[i] = st;
            vsota += array[i];
            i++;
        }
    }

    for (int j = 0; j != 10; j++)
        obratno[j] = array[--i];

    cout << "Vsota elementov je : " << vsota << endl;
    cout << "Najvecje stevilo je : " << array[9] << endl;
    cout << "Najmanjse stevilo je : " << array[0] << endl;
    cout << "Obratni vrsti red je : ";
    for (int j = 0; j != 10; j++)
        cout << obratno[j] << " ";

    return 0;
}