#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	srand(time(NULL));
	
	int polje[30];
	int vsota;
	
	for (int i = 0; i != 30; i++) {
		polje[i] = rand() % 500;
		vsota += polje[i];
		cout << polje [i] << " ";
	}
	
	cout << "\nVsota : " << vsota; 

	
}
