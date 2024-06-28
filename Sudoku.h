#pragma once




class Sudoku {
	unsigned char Plansza[9][9];
public:
	Sudoku();
	void set_value(short int x, short int y, unsigned char value);
	void show();
	static bool check_board(unsigned char Plansza[9][9], short int x, short int y, short int value);
	static bool check_win(unsigned char Plansza[9][9]);
};

