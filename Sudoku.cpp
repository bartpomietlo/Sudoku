#include <iostream>
#include "Sudoku.h"

using std::cout;
using std::endl;

Sudoku::Sudoku() {
	char Plansza[9][9] = {
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
	};
}
bool Sudoku::check_board(unsigned char Plansza[9][9], short int x, short int y, short int value) {
	for (short int i = 0; i < 9; i++) {
		if ((Plansza[i][y] == value) || (Plansza[x][i] == value) || Plansza[(((x) / 3) * 3) + ((i) / 3)][(((y) / 3) * 3) + ((i) % 3)] == value) {
			return true;
		}
	}
	return false;
}



bool Sudoku::check_win(unsigned char Plansza[9][9]) {
	for (short int i = 1; i<81; i++) {
		if (Plansza[i/9][i%9]==204) {
			return false;
		}
	}
	return true;
	
}



void Sudoku::set_value(short int x, short int y, unsigned char value) {
	bool warunek = true;
	x -= 1; y -= 1;
	if ((int)Plansza[x][y]==204 && (x < 10 && x>=0) && (y < 10 && y>=0) && (value < 10 && value>0)) {
		if (check_board(Plansza, x,y,value)) {
				warunek = false;		
		}
		if (warunek) {
			Plansza[x][y] = value;
		}
		else {
			cout << "blad!!!" << endl;
		}
	}
	else {
		cout << "bledna wartosc!" << endl;
	}


	if (check_win(Plansza)){
		cout << "Koniec gry!!!";
	}

}



void Sudoku::show() {
	for (int i =0; i<9; i++) {
		for (int j=0; j<9;j++) {
			cout << "|";
			if ((int)Plansza[i][j]==204) {
					cout << " ";
			}
			else {
				cout << (int)Plansza[i][j];
			}
			if (j % 3 == 2 && j!=0) {
				cout << "|  ";
			}
		}
		if (i%3==2) {
			cout << endl;
		}
		cout << endl;
	}
}


