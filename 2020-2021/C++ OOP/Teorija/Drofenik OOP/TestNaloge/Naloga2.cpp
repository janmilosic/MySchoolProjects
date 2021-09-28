/*
NALOGA 2:
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    for(int i = 10; i > 0; i--){
        x=(3.14*(i*8)) *2;
        cout << i <<" Ploscina kroga je:" << x <<endl;
    }
    return 0;
}
