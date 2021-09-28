#include <iostream>
#include <cstdlib>  //srand in rand  (srand- seme) (rand random)
#include <ctime> //dostop do casa 

using namespace std;

int main(){

int a[39];
int b[8];
int i=0;
int j=0;

srand(time(NULL)); 

while (i<=39)
{
    a[i]=i;
    i++;
}

while (j<8)
{
    b[j] = 1 + rand() % 38;
    cout << a[b[j]] << endl; //od polja b se vzame vrednost b-ja in se izpiše vrednost a-ja pri b-ju
    j++;
}
    return 0;
}
