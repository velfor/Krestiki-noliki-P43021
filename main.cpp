#include "krestiki.h"
#include <clocale>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	char field[3][3];
	init_field(field);
	print_field(field);
	//�������� ���� ����
	while (true) {
		//��� ������ x
		player_turn(field);
		//������ ����
		print_field(field);
		//�������� �� ������ x
		if (check_win(field, 'x')) {
			cout << "������ x" << endl;
			break;
		}
		//�������� �� �����
		if (check_draw(field)) {
			cout << "�����" << endl;
			break;
		}
		//��� ������ �
		player_turn(field);
		//������ ����
		print_field(field);
		//�������� �� ������ �
		if (check_win(field, 'o')) {
			cout << "������ x" << endl;
			break;
		}
		//�������� �� �����
		if (check_draw(field)) {
			cout << "�����" << endl;
			break;
		}
	}
	return 0;
}

