#include<iostream>
using namespace std;
//готовит поле к новой игре, заполн€€ его пробелами
void init_field(char field[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			field[i][j] = ' ';
		}
	}
}
//печать пол€
void print_field(char field[3][3]) {
	//|---|---|---|
	for (int i = 0; i < 3; i++) {
		//|---|---|---|
		cout << "|---|---|---|" << endl;
		//строка пол€ с крестиками и ноликами
		for (int j = 0; j < 3; j++) {
			cout << "| " << field[i][j] << ' ';
		}
		cout << '|' << endl;
	}
	cout << "|---|---|---|" << endl;
}
void player_turn(char field[3][3]) {
	int row, col;
	char sign;
	do {
		cout << "¬ведите номер строки пол€ ";
		cin >> row;
	} while (row < 0 || row > 2);
	do {
		cout << "¬ведите номер столбца пол€ ";
		cin >> col;
	} while (col < 0 || col > 2);
	do {
		cout << "¬ведите значок ";
		cin >> sign;
	} while (sign != 'x' && sign != 'o');
	field[row][col] = sign;
}
//проверка на победу
bool check_win(char field[3][3], char sign) {
	if (field[0][0] == sign && field[0][1] == sign && field[0][2] == sign)return true;
	if (field[1][0] == sign && field[1][1] == sign && field[1][2] == sign)return true;
	if (field[2][0] == sign && field[2][1] == sign && field[2][2] == sign)return true;
	if (field[0][0] == sign && field[1][0] == sign && field[2][0] == sign)return true;
	if (field[0][1] == sign && field[1][1] == sign && field[2][1] == sign)return true;
	if (field[0][2] == sign && field[1][2] == sign && field[2][2] == sign)return true;
	if (field[0][0] == sign && field[1][1] == sign && field[2][2] == sign)return true;
	if (field[0][2] == sign && field[1][1] == sign && field[2][0] == sign)return true;
	return false;
}
//проверка на ничью
bool check_draw(char field[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (field[i][j] == ' ') return false;
		}
	}
	return true;
}