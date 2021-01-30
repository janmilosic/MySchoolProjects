#include <iostream>

using namespace std;

//rezerviraj polje, ga napolni in obrni
int main()
{
int i=0;
int j=0;
int a[10]; //polje a
int b[10]; //polje b

//napolnmimo -->
while (i<=9) 
{

    a[i]=i; //prireditev polja z trenutno vrednostjo i
    cout << a[i] <<endl; //izpis na zaslonu

    i++; //povečanje za 1 (i-- za -1)

}

//obrenomo -->
int x=i-1;

while (j<=x)
{
    b[j] = a[--i]; //ko je "++" pred i se bo prvo povecalo ce pa "i++" pa se najprej izvede nato poveča
    cout << b[j] <<endl;
    j++;
    
}

    return 0;

}