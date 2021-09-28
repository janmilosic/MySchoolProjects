#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int st, st2, ost;
	
	cout << "Majstor vpisi cifro : " ;
	cin >> st;
	
	while(st>0){
		ost = st % 10;
		st2 = st2 * 10 + ost;
		st = st / 10;
	}
	
	cout << st2;
	
	return 0;
}
