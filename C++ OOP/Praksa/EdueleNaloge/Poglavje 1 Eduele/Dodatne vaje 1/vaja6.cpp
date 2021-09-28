#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int a=340, b=280, c=220, ploscica=900,  okno=9000, rez;
	
	rez = a * b + 2 * a * c + 2 * b * c - okno;
	cout << "Majstore rabi toliko ploscic : " << ceil((float)rez/(float)ploscica);
	
	
	return 0;
}
