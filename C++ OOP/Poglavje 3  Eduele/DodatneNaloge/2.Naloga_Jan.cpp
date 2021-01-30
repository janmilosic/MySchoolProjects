#include <cstdlib>
#include <iostream>

using namespace std;

char Man(char a, char b) {
	if (a > b) return a;
	
	return b;
}

int main() {

    char a, b;
    
    cout << "Vnesi 1. znak : ";
    cin >> a;
    cout << "Vnesi 2. znak : ";
    cin >> b;
    

    cout << "Vecji je : " << Man(a, b);

    return 0;
}







