#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

int stevila[10];

void najpogostejseStevilo(){

    int prestej;
    int max = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; ++i) {
        stevila[i] = rand() % 5 + 1;
        cout << stevila[i] << " ";

        if (stevila[i] > max){
            max = stevila[i];
            prestej = 1;
        } else if (stevila[i] == max){
            prestej++;
        }

    }

    cout<<"The largest number is "<<max<<".\nThe occurrence count of the largest number is "<<prestej<<".\n";

}