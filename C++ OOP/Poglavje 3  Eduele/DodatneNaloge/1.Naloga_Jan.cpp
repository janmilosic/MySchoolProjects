#include <cstdlib>
#include <iostream>

using namespace std;

int Min(int a, int b) {
	if (a < b) return a;
	
	return b;
}

int main() {

    int a, b;
    
    cout << "Vnesi 1. stevilko : ";
    cin >> a;
    cout << "Vnesi 2. stevilko : ";
    cin >> b;

    cout << "Manjsa je : " << Min(a, b);

    return 0;
}







