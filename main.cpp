#include "krestiki.h"
#include <clocale>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	char field[3][3];
	init_field(field);
	print_field(field);
	//основной цикл игры
	while (true) {
		//ход игрока x
		player_turn(field);
		//печать пол€
		print_field(field);
		//проверка на победу x
		if (check_win(field, 'x')) {
			cout << "ѕобеда x" << endl;
			break;
		}
		//проверка на ничью
		if (check_draw(field)) {
			cout << "Ќичь€" << endl;
			break;
		}
		//ход игрока о
		player_turn(field);
		//печать пол€
		print_field(field);
		//проверка на победу о
		if (check_win(field, 'o')) {
			cout << "ѕобеда x" << endl;
			break;
		}
		//проверка на ничью
		if (check_draw(field)) {
			cout << "Ќичь€" << endl;
			break;
		}
	}
	return 0;
}

