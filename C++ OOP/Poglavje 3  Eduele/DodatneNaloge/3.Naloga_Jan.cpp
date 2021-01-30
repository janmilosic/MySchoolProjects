#include <cstdlib>
#include <iostream>

using namespace std;

void Zamenjaj(int & a, int & b) {
	
	int c = a;
	a = b;
	b = c;
	
}


int main() {
	
	int a, b;
	
	cout << "Podaj 1. stevilo : ";
	cin >> a;
	cout << "Podaj 2. stevilo : ";
	cin >> b;
	
	Zamenjaj(a, b);
	

    return 0;
}







