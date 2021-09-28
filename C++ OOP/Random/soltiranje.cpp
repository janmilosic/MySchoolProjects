#include <iostream>
#include <cstdlib>

using namespace std;

void izpisipolje(int p[], int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

void zamenjaj(int &a, int &b)
{

    int tmp = a;
    a = b;
    b = tmp;
}

void sortiranjepolje(int p[], int d)
{

    for (int i = 0; i < d; i++)
    {
        for (int j = i + 1; j < d; j++)
        {
            if (p[i] < p[j])
            {

                zamenjaj(p[i], p[j]);
                /*
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp; */
            }
        }
    }
}

int main(int argc, char **argv)
{

    int dd = 10;
    int pp[dd] = {13, 4, 7577, 565, 767, 343, 7, 787, 2, 45};

    izpisipolje(pp, dd);
    sortiranjepolje(pp, dd);
    izpisipolje(pp, dd);

    return 0;
}