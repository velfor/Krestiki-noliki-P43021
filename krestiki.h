#pragma once
void init_field(char field[3][3]);//прототип функции
void print_field(char field[3][3]);
void player_turn(char field[3][3]);
bool check_win(char field[3][3], char sign);
bool check_draw(char field[3][3]);