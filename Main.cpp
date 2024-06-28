

#include <iostream>
#include "Sudoku.h"

using namespace std;

int main()
{


    Sudoku p1;
	short int x,y,l;
	while (true) {
		for (int i = 1; i<=9;i++) {
			for (int j = 1; j<= 9; j++) {
				cout << "wprowadz wartosc: ";
				cin >> l;
				p1.set_value(i, j, l);
				p1.show();
			}
		}
	}
	//while (true) {
	//	cout << "wprowadz wartosc: [kolumna] [wiersz] [wartosc]:";
	//	cin >> x >> y >> l;
	//	p1.show();
	//}
}

